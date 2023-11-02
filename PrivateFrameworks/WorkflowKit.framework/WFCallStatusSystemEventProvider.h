
@interface WFCallStatusSystemEventProvider : NSObject <WFSystemEventProvider> {
    TUCallCenter * _callCenter;
    id /* block */  eventCallback;
}

@property (nonatomic, retain) TUCallCenter *callCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canProxyTelephony;
+ (bool)isAvailable;

- (void).cxx_destruct;
- (id)callCenter;
- (void)callStatusChanged:(id)arg1;
- (id /* block */)eventCallback;
- (void)invalidate;
- (void)resume;
- (void)setCallCenter:(id)arg1;
- (void)setEventCallback:(id /* block */)arg1;
- (void)updateWithCall:(id)arg1;

@end
