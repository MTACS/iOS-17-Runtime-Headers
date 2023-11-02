
@interface SBExternalDisplayBiomeDonor : NSObject <SBSExternalDisplayServiceObserver> {
    NSMutableDictionary * _biomeDonationTimers;
    SBSExternalDisplayService * _externalDisplayService;
}

@property (nonatomic, retain) NSMutableDictionary *biomeDonationTimers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBSExternalDisplayService *externalDisplayService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_donateToBiomeIfNecessaryForDisplayInfo:(id)arg1 connect:(bool)arg2;
- (id)biomeDonationTimers;
- (void)dealloc;
- (void)externalDisplayDidConnect:(id)arg1;
- (id)externalDisplayService;
- (void)externalDisplayWillDisconnect:(id)arg1;
- (id)init;
- (void)setBiomeDonationTimers:(id)arg1;

@end
