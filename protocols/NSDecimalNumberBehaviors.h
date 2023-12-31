
@protocol NSDecimalNumberBehaviors

@required

- (NSDecimalNumber *)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(NSDecimalNumber *)arg3 rightOperand:(NSDecimalNumber *)arg4;
- (unsigned long long)roundingMode;
- (short)scale;

@end
