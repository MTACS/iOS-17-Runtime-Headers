
@interface PSUICoreTelephonyCallCache : NSObject {
    CXCallObserver * _callObserver;
}

@property (nonatomic, retain) CXCallObserver *callObserver;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)callObserver;
- (id)getLogger;
- (id)init;
- (id)initPrivate:(id)arg1;
- (bool)isActiveCallSubtype:(const char *)arg1;
- (bool)isActiveCallVoLTE;
- (bool)isActiveCallVoNR;
- (bool)isAnyCallActive;
- (bool)isAnyCallActiveForProviderIdentifier:(id)arg1;
- (bool)isAnyTelephonyCallActive;
- (bool)isAnyVOIPCallActive;
- (id)localizedPhoneNumber:(id)arg1 context:(id)arg2;
- (void)setCallObserver:(id)arg1;

@end
