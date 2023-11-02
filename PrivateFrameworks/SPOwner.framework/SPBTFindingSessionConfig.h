
@interface SPBTFindingSessionConfig : NSObject <NSCopying, NSSecureCoding> {
    bool  _optInRawRSSIMeasurement;
}

@property (nonatomic, readonly) bool optInRawRSSIMeasurement;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptInRawRSSIMeasurement:(bool)arg1;
- (bool)optInRawRSSIMeasurement;

@end
