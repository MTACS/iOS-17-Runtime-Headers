
@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging> {
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSURL *url;

+ (id)logCategory;
+ (bool)scheduleTask:(id)arg1;
+ (bool)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (void).cxx_destruct;
- (id)activityForScheduling;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)url;

@end
