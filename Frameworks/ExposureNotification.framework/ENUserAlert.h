
@interface ENUserAlert : NSObject {
    id /* block */  _actionHandler;
    bool  _activateCalled;
    NSString * _alternativeButtonTitleKey;
    NSString * _defaultButtonTitleKey;
    bool  _dismissed;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _showOnLockScreen;
    NSString * _subTitleKey;
    NSObject * _subTitleParameter;
    double  _timeoutSeconds;
    NSString * _titleKey;
    NSString * _titleParameter;
    struct __CFUserNotification { } * _userNotification;
    struct __CFRunLoopSource { } * _userRLS;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) NSString *alternativeButtonTitleKey;
@property (nonatomic, copy) NSString *defaultButtonTitleKey;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool showOnLockScreen;
@property (nonatomic, copy) NSString *subTitleKey;
@property (nonatomic, copy) NSObject *subTitleParameter;
@property (nonatomic) double timeoutSeconds;
@property (nonatomic, copy) NSString *titleKey;
@property (nonatomic, copy) NSString *titleParameter;

- (void).cxx_destruct;
- (void)_activateWithCompletionHandler:(id /* block */)arg1;
- (void)_autoInvalidate;
- (void)_invalidated;
- (void)_responseCallback:(struct __CFUserNotification { }*)arg1 responseFlags:(unsigned long long)arg2;
- (id /* block */)actionHandler;
- (void)activateWithCompletionHandler:(id /* block */)arg1;
- (id)alternativeButtonTitleKey;
- (void)dealloc;
- (id)defaultButtonTitleKey;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAlternativeButtonTitleKey:(id)arg1;
- (void)setDefaultButtonTitleKey:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setShowOnLockScreen:(bool)arg1;
- (void)setSubTitleKey:(id)arg1;
- (void)setSubTitleParameter:(id)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (void)setTitleKey:(id)arg1;
- (void)setTitleParameter:(id)arg1;
- (bool)showOnLockScreen;
- (id)subTitleKey;
- (id)subTitleParameter;
- (double)timeoutSeconds;
- (id)titleKey;
- (id)titleParameter;

@end
