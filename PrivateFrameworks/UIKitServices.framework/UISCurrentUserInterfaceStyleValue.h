
@interface UISCurrentUserInterfaceStyleValue : NSObject {
    int  _notificationToken;
}

@property (nonatomic, readonly) long long userInterfaceStyle;

- (void)dealloc;
- (id)init;
- (id)initWithChangesDeliveredOnQueue:(id)arg1 toBlock:(id /* block */)arg2;
- (long long)userInterfaceStyle;

@end
