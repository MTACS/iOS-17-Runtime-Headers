
@interface SPRawSearchResult : NSObject <NSCopying, NSSecureCoding> {
    NSData * _hashedPublicKey;
    double  _horizontalAccuracy;
    double  _latitude;
    double  _longitude;
    NSData * _publicKey;
    long long  _status;
    NSDate * _timestamp;
}

@property (nonatomic, readonly, copy) NSData *hashedPublicKey;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly, copy) NSData *publicKey;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)hashedPublicKey;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashedPublicKey:(id)arg1 publicKey:(id)arg2 status:(long long)arg3 timestamp:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 horizontalAccuracy:(double)arg7;
- (double)latitude;
- (double)longitude;
- (id)publicKey;
- (long long)status;
- (id)timestamp;

@end
