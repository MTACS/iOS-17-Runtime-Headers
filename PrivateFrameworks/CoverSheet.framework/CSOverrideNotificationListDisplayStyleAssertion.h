
@interface CSOverrideNotificationListDisplayStyleAssertion : NSObject <BSCancellable, BSInvalidatable> {
    unsigned long long  _displayStyle;
    bool  _hideNotificationCount;
    id /* block */  _invalidationHandler;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideNotificationCount;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (unsigned long long)displayStyle;
- (bool)hideNotificationCount;
- (id)initWithNotificationListDisplayStyle:(unsigned long long)arg1 hideNotificationCount:(bool)arg2 reason:(id)arg3 invalidationHandler:(id /* block */)arg4;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)reason;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setHideNotificationCount:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setReason:(id)arg1;

@end
