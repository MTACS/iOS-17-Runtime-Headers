
@interface CUUserAlert : NSObject <CUActivatable> {
    id /* block */  _actionHandler;
    bool  _activateCalled;
    NSString * _alternativeButtonTitleKey;
    NSString * _defaultButtonTitleKey;
    bool  _dismissed;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSBundle * _localizationBundle;
    NSString * _localizationTableName;
    NSString * _subtitleKey;
    NSString * _subtitleParameter;
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
@property (nonatomic, retain) NSBundle *localizationBundle;
@property (nonatomic, copy) NSString *localizationTableName;
@property (nonatomic, copy) NSString *subtitleKey;
@property (nonatomic, copy) NSString *subtitleParameter;
@property (nonatomic) double timeoutSeconds;
@property (nonatomic, copy) NSString *titleKey;
@property (nonatomic, copy) NSString *titleParameter;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_autoInvalidate;
- (void)_invalidated;
- (void)_responseCallback:(struct __CFUserNotification { }*)arg1 responseFlags:(unsigned long long)arg2;
- (id /* block */)actionHandler;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)alternativeButtonTitleKey;
- (void)dealloc;
- (id)defaultButtonTitleKey;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)localizationBundle;
- (id)localizationTableName;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAlternativeButtonTitleKey:(id)arg1;
- (void)setDefaultButtonTitleKey:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLocalizationBundle:(id)arg1;
- (void)setLocalizationTableName:(id)arg1;
- (void)setSubtitleKey:(id)arg1;
- (void)setSubtitleParameter:(id)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (void)setTitleKey:(id)arg1;
- (void)setTitleParameter:(id)arg1;
- (id)subtitleKey;
- (id)subtitleParameter;
- (double)timeoutSeconds;
- (id)titleKey;
- (id)titleParameter;

@end
