
@interface APLogConfig : NSObject <NSCopying, NSMutableCopying> {
    NSObject<OS_os_log> * _backingOSLogObject;
    NSString * _category;
    NSObject<OS_dispatch_queue> * _propertyAccessQueue;
    NSString * _subsystem;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;
@property (nonatomic, retain) NSObject<OS_os_log> *backingOSLogObject;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (nonatomic, copy) NSString *subsystem;

+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)sharedConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedExtensionConfig;
+ (id)sharedFrameworkConfig;
+ (id)sharedPluginConfig;
+ (id)sharedSettingsConfig;
+ (id)sharedUIServiceConfig;

- (void).cxx_destruct;
- (id)OSLogObject;
- (id)backingOSLogObject;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyAccessQueue;
- (void)setBackingOSLogObject:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setPropertyAccessQueue:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (id)subsystem;

@end
