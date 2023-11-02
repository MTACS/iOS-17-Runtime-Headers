
@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding> {
    unsigned long long  _backgroundRefreshRate;
    NSString * _endpointURLString;
    unsigned long long  _foregroundRefreshRate;
    unsigned long long  _modMax;
    unsigned long long  _modThreshold;
    NSString * _todayEndpointURLString;
    NSString * _widgetEndpointURLString;
}

@property (nonatomic, readonly) unsigned long long backgroundRefreshRate;
@property (nonatomic, readonly, copy) NSString *endpointURLString;
@property (nonatomic, readonly) unsigned long long foregroundRefreshRate;
@property (nonatomic, readonly) unsigned long long modMax;
@property (nonatomic, readonly) unsigned long long modThreshold;
@property (nonatomic, readonly, copy) NSString *todayEndpointURLString;
@property (nonatomic, readonly, copy) NSString *widgetEndpointURLString;

+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;
+ (id)userSegmentationConfigurationWithConfigDict:(id)arg1 environment:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)backgroundRefreshRate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointURLString;
- (unsigned long long)foregroundRefreshRate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithForegroundRefreshRate:(unsigned long long)arg1 backgroundRefreshRate:(unsigned long long)arg2 modThreshold:(unsigned long long)arg3 modMax:(unsigned long long)arg4 endpointURLString:(id)arg5 widgetEndpointURLString:(id)arg6 todayEndpointURLString:(id)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)modMax;
- (unsigned long long)modThreshold;
- (id)todayEndpointURLString;
- (id)widgetEndpointURLString;

@end
