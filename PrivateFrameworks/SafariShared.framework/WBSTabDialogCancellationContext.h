
@interface WBSTabDialogCancellationContext : NSObject {
    NSString * _reason;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)cancellationContextWithReason:(id)arg1 userInfo:(id)arg2;
+ (id)committedNavigationContextWithURL:(id)arg1;
+ (id)provisionalNavigationContext;
+ (id)tabClosedContext;

- (void).cxx_destruct;
- (id)init;
- (id)initWithReason:(id)arg1 userInfo:(id)arg2;
- (id)reason;
- (id)userInfo;

@end
