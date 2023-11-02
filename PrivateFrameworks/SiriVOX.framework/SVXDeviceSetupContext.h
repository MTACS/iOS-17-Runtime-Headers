
@interface SVXDeviceSetupContext : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _beginDate;
    NSDate * _endDate;
    SVXDeviceSetupFlowScene * _flowScene;
    SVXDeviceSetupOptions * _options;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly, copy) NSDate *beginDate;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) SVXDeviceSetupFlowScene *flowScene;
@property (nonatomic, readonly, copy) SVXDeviceSetupOptions *options;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)beginDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)flowScene;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithTimestamp:(unsigned long long)arg1 options:(id)arg2 flowScene:(id)arg3;
- (id)initWithTimestamp:(unsigned long long)arg1 options:(id)arg2 flowScene:(id)arg3 beginDate:(id)arg4 endDate:(id)arg5;
- (id)initWithTimestamp:(unsigned long long)arg1 presentsAlternativeFlowWhenStoreAccountIsUnavailable:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)options;
- (unsigned long long)timestamp;

@end
