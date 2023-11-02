
@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule> {
    NSMutableSet * _rules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAutoUnlockRule:(id)arg1;
- (id)init;
- (void)removeAutoUnlockRule:(id)arg1;
- (bool)shouldAutoUnlockForSource:(int)arg1;

@end
