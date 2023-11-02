
@interface _NSKeyValueReturnedValueConsistencyStats : NSObject {
    bool  _capturedInitialValue;
    long long  _checkCount;
    id  _copiedCurrentValue;
    _NSKeyValueObjectAndKeyPair * _pair;
    id  _weakCurrentValue;
}

- (id)currentValue;
- (void)dealloc;
- (void)setCurrentValue:(id)arg1;

@end
