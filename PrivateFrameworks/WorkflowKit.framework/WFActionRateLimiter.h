
@interface WFActionRateLimiter : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSDictionary *attempts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (void)performAction:(id)arg1 onQueue:(id)arg2 withBlock:(id /* block */)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)attempts;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (void)modify:(id /* block */)arg1;
- (id)queue;
- (void)setAttempts:(id)arg1;
- (id)userDefaults;

@end
