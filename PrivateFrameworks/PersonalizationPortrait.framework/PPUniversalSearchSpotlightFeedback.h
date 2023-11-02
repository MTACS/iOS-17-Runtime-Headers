
@interface PPUniversalSearchSpotlightFeedback : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientBundleId;
    NSString * _clientIdentifier;
    unsigned int  _engagedCSSICount;
    unsigned int  _offeredCSSICount;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSString *clientBundleId;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, readonly) unsigned int engagedCSSICount;
@property (nonatomic, readonly) unsigned int offeredCSSICount;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientBundleId;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)engagedCSSICount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOfferedCSSICount:(unsigned int)arg1 engagedCSSICount:(unsigned int)arg2;
- (id)initWithOfferedCSSICount:(unsigned int)arg1 engagedCSSICount:(unsigned int)arg2 timestamp:(id)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPPUniversalSearchSpotlightFeedback:(id)arg1;
- (unsigned int)offeredCSSICount;
- (void)setClientIdentifier:(id)arg1;
- (id)timestamp;

@end
