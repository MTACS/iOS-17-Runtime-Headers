
@interface _BNPresentableContext : NSObject <BNPresentableContext, BNPresentableContextHostToClientInterface, BNPresentableObservable, BSInvalidatable> {
    BSServiceConnection * _connection;
    bool  _connectionActivated;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSString * _machName;
    NSHashTable * _observers;
    <BNPresentable> * _presentable;
    int  _presentableAppearState;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BNPresentable> *presentable;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)__bannerWillNotAppearWithReason:(id)arg1 error:(out id*)arg2;
- (oneway void)__bannerWillNotAppearWithReason:(id)arg1 reply:(id /* block */)arg2;
- (void)__handleTemplateContentEvent:(id)arg1 error:(out id*)arg2;
- (oneway void)__handleTemplateContentEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)__setBannerAppearState:(id)arg1 reason:(id)arg2 error:(out id*)arg3;
- (oneway void)__setBannerAppearState:(id)arg1 reason:(id)arg2 reply:(id /* block */)arg3;
- (void)__setUserInteractionWillBegin:(id)arg1 error:(out id*)arg2;
- (oneway void)__setUserInteractionWillBegin:(id)arg1 reply:(id /* block */)arg2;
- (id)_activeConnectionWithError:(out id*)arg1;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)_invalidateConnection;
- (void)_runPostConnectionInvalidation;
- (void)_setBannerAppearState:(int)arg1 reason:(id)arg2;
- (void)addPresentableObserver:(id)arg1;
- (id)description;
- (id)initWithMachName:(id)arg1 presentable:(id)arg2;
- (void)invalidate;
- (id)presentable;
- (void)removePresentableObserver:(id)arg1;
- (void)setHostNeedsUpdate;
- (void)setPresentable:(id)arg1;

@end
