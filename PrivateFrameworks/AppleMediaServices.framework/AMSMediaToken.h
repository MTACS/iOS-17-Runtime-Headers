
@interface AMSMediaToken : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    double  _lifetime;
    NSString * _tokenString;
    bool  _valid;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) double lifetime;
@property (nonatomic, readonly, copy) NSString *tokenString;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3;
- (id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(bool)arg4;
- (id)invalidCopy;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isValid;
- (double)lifetime;
- (double)percentageOfLifetimeRemaining;
- (id)tokenString;
- (bool)willExpireWithin:(double)arg1;

@end
