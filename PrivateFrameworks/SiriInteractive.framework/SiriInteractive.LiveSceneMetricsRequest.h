
@interface SiriInteractive.LiveSceneMetricsRequest : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    void _lockScreenMetrics;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) _TtC15SiriInteractive27LiveSceneItemMetricsRequest *lockScreenMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockScreenMetrics:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lockScreenMetrics;
- (void)setLockScreenMetrics:(id)arg1;

@end
