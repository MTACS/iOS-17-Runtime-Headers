
@interface AXLTPhoneCallListener : NSObject <CXCallObserverDelegate> {
    TUCallCenter * _callCenter;
    CXCallObserver * _callObserver;
    <AXLTPhoneCallListenerDelegate> * _delegate;
    long long  _utilityType;
}

@property (nonatomic, retain) TUCallCenter *callCenter;
@property (nonatomic, retain) CXCallObserver *callObserver;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXLTPhoneCallListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCallActive;
@property (readonly) Class superclass;
@property (nonatomic) long long utilityType;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startObserving;
- (id)callCenter;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)callStatusChanged:(id)arg1;
- (id)delegate;
- (id)init;
- (bool)isCallActive;
- (void)setCallCenter:(id)arg1;
- (void)setCallObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUtilityType:(long long)arg1;
- (long long)utilityType;

@end
