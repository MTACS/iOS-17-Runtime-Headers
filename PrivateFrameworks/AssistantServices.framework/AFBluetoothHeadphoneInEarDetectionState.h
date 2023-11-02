
@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <NSCopying, NSSecureCoding> {
    bool  _isEnabled;
    long long  _primaryEarbudSide;
    long long  _primaryInEarStatus;
    long long  _secondaryInEarStatus;
}

@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) long long primaryEarbudSide;
@property (nonatomic, readonly) long long primaryInEarStatus;
@property (nonatomic, readonly) long long secondaryInEarStatus;

+ (void)decodeFromNotifyState:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
+ (unsigned long long)encodeForBTAddress:(id)arg1 headphoneInEarDetectionStateDidChangeFrom:(id)arg2 to:(id)arg3;
+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsEnabled:(bool)arg1 primaryEarbudSide:(long long)arg2 primaryInEarStatus:(long long)arg3 secondaryInEarStatus:(long long)arg4;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)primaryEarbudSide;
- (long long)primaryInEarStatus;
- (long long)secondaryInEarStatus;

@end
