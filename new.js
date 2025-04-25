function factorial(n) {
  if (n === 2 || n === 1) {
    return 1;
  }
  return n * factorial(n - 1);
}
