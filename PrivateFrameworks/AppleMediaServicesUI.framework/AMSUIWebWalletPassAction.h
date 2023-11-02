
@interface AMSUIWebWalletPassAction : AMSUIWebAction {
    bool  _attemptLynxProvisioning;
    NSNumber * _lookupFeature;
}

@property (nonatomic) bool attemptLynxProvisioning;
@property (nonatomic, retain) NSNumber *lookupFeature;

- (void).cxx_destruct;
- (id)_attemptLynxProvisioning;
- (id)_lookupPassForIdentifier:(unsigned long long)arg1;
- (bool)attemptLynxProvisioning;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)lookupFeature;
- (id)runAction;
- (void)setAttemptLynxProvisioning:(bool)arg1;
- (void)setLookupFeature:(id)arg1;

@end
