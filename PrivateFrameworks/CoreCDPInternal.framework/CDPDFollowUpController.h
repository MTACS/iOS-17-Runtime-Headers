
@interface CDPDFollowUpController : NSObject <CDPDAuthListener> {
    FLFollowUpController * _followUpController;
    CDPDFollowUpFactory * _followUpFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FLFollowUpController *followUpController;
@property (nonatomic, retain) CDPDFollowUpFactory *followUpFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_identifiersAllowedForTelemetry;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cdpRepairContext:(id)arg1;
- (bool)_clearFollowUpForContext:(id)arg1 error:(id*)arg2;
- (id)_followUpControllerForContext:(id)arg1;
- (id)_hasSOSActiveDeviceForAltDSID:(id)arg1;
- (bool)_isNotAudioAccessory;
- (id)_makeAAFLFollowUpController;
- (bool)_postFollowUpItem:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)_rkMismatchHealingContext:(id)arg1;
- (id)_sosCompatibilityModeContext:(id)arg1;
- (bool)clearFollowUpWithContext:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)followUpController;
- (id)followUpFactory;
- (id)informativeText;
- (id)init;
- (bool)postFollowUpItemForContext:(id)arg1 error:(id*)arg2;
- (void)securityLevelChangedForAccountContext:(id)arg1;
- (void)setFollowUpController:(id)arg1;
- (void)setFollowUpFactory:(id)arg1;

@end
