
@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying, NSSecureCoding> {
    long long  _generatedAtMillis;
    long long  _lifespanMillis;
    long long  _timeToLiveMillis;
    NSString * _token;
    ICLibraryAuthServiceClientTokenIdentifier * _tokenIdentitifer;
}

@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) long long generatedAtMillis;
@property (nonatomic, readonly) bool isExpired;
@property (nonatomic, readonly) long long lifespanMillis;
@property (nonatomic, readonly) long long timeToLiveMillis;
@property (nonatomic, readonly, copy) NSString *token;
@property (nonatomic, readonly, copy) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (long long)generatedAtMillis;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (bool)isExpired;
- (long long)lifespanMillis;
- (long long)timeToLiveMillis;
- (id)token;
- (id)tokenIdentitifer;

@end
