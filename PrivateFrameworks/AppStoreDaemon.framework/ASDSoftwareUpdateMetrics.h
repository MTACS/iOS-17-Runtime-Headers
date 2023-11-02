
@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _lastUpdateCheck;
    NSDate * _nextUpdateCheck;
    bool  _usingModernUpdatesCheck;
}

@property (nonatomic, copy) NSDate *lastUpdateCheck;
@property (nonatomic, copy) NSDate *nextUpdateCheck;
@property (nonatomic) bool usingModernUpdatesCheck;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdateCheck;
- (id)nextUpdateCheck;
- (void)setLastUpdateCheck:(id)arg1;
- (void)setNextUpdateCheck:(id)arg1;
- (void)setUsingModernUpdatesCheck:(bool)arg1;
- (bool)usingModernUpdatesCheck;

@end
