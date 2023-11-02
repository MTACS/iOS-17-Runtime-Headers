
@interface SBFlashlightAlertElement : SBFlashlightElement <SAAlertBehavior> {
    <SAAlertHosting> * _alertHost;
}

@property (nonatomic) <SAAlertHosting> *alertHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)flashlightUnavailableAlert;

- (void).cxx_destruct;
- (id)alertHost;
- (bool)hasAlertBehavior;
- (void)setAlertHost:(id)arg1;

@end
