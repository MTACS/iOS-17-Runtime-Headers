
@interface QuickTypePFLBackgroundTask : MLBackgroundTask {
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (void).cxx_destruct;
- (id)activityForScheduling;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
