
@interface TMTime : NSObject <NSCopying, NSSecureCoding> {
    bool  _reliability;
    long long  _rtc_ns;
    double  _sf;
    double  _sfUnc;
    NSString * _source;
    bool  _synthesized;
    double  _utcUnc_s;
    long long  _utc_ns;
}

@property (nonatomic) bool reliability;
@property (nonatomic) long long rtc_ns;
@property (nonatomic) double rtc_s;
@property (nonatomic) double sf;
@property (nonatomic) double sfUnc;
@property (nonatomic, copy) NSString *source;
@property (getter=isSynthesized, nonatomic) bool synthesized;
@property (nonatomic) double utcUnc_s;
@property (nonatomic) long long utc_ns;
@property (nonatomic) double utc_s;

+ (bool)supportsSecureCoding;
+ (id)timeWithDictionary:(id)arg1;
+ (id)timeWithUtc_s:(double)arg1 utcUnc_s:(double)arg2 rtc_s:(double)arg3 sf:(double)arg4 source:(id)arg5;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtc_ns:(long long)arg1 utcUnc_s:(double)arg2 rtc_ns:(long long)arg3 sf:(double)arg4 sfUnc:(double)arg5 source:(id)arg6;
- (bool)isEquivalent:(id)arg1;
- (bool)isSynthesized;
- (double)propagatedTimeAtRTC:(double)arg1;
- (double)propagatedUncertaintyAtRTC:(double)arg1;
- (bool)reliability;
- (long long)rtc_ns;
- (double)rtc_s;
- (void)setReliability:(bool)arg1;
- (void)setRtc_ns:(long long)arg1;
- (void)setRtc_s:(double)arg1;
- (void)setSf:(double)arg1;
- (void)setSfUnc:(double)arg1;
- (void)setSource:(id)arg1;
- (void)setSynthesized:(bool)arg1;
- (void)setUtcUnc_s:(double)arg1;
- (void)setUtc_ns:(long long)arg1;
- (void)setUtc_s:(double)arg1;
- (double)sf;
- (double)sfUnc;
- (id)source;
- (double)utcUnc_s;
- (long long)utc_ns;
- (double)utc_s;

@end
