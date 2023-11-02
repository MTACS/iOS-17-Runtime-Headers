
@interface ASDPurgeableAppRequestOptions : ASDRequestOptions {
    bool  _performAvailablityCheck;
    bool  _skipLaunchCheck;
    long long  _urgency;
    NSString * _volume;
}

@property (nonatomic) bool performAvailablityCheck;
@property (nonatomic) bool skipLaunchCheck;
@property (nonatomic) long long urgency;
@property (nonatomic, copy) NSString *volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolume:(id)arg1 urgency:(long long)arg2;
- (bool)performAvailablityCheck;
- (void)setPerformAvailablityCheck:(bool)arg1;
- (void)setSkipLaunchCheck:(bool)arg1;
- (void)setUrgency:(long long)arg1;
- (void)setVolume:(id)arg1;
- (bool)skipLaunchCheck;
- (long long)urgency;
- (id)volume;

@end
