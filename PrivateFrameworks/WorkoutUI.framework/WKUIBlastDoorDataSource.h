
@interface WKUIBlastDoorDataSource : NSObject <NSSecureCoding> {
    unsigned long long  _activityType;
    NSString * _configurationName;
    long long  _configurationType;
    unsigned long long  _goalTypeIdentifier;
    bool  _isIndoor;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) NSString *configurationName;
@property (nonatomic, readonly) long long configurationType;
@property (nonatomic, readonly) unsigned long long goalTypeIdentifier;
@property (nonatomic, readonly) bool isIndoor;

+ (id)dataFromSourceFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityType;
- (id)configurationName;
- (long long)configurationType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)goalTypeIdentifier;
- (unsigned long long)hash;
- (id)initWithActivityType:(unsigned long long)arg1 isIndoor:(bool)arg2 configurationType:(long long)arg3 configurationName:(id)arg4 goalTypeIdentifier:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isIndoor;

@end
