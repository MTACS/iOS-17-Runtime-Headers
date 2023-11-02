
@interface JFXCaptureCallObserver : NSObject <CXCallObserverDelegate> {
    CXCallObserver * _callObserver;
}

@property (nonatomic, readonly) long long callCount;
@property (nonatomic, retain) CXCallObserver *callObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)callCount;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;
- (void)setCallObserver:(id)arg1;

@end
