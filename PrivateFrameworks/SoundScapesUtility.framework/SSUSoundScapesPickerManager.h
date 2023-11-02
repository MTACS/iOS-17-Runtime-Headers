
@interface SSUSoundScapesPickerManager : NSObject <_EXHostViewControllerDelegate> {
    NSMapTable * _delegates;
    NSMapTable * _targetMediaProfile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)pickerForMediaProfileContainers:(id)arg1 forDelegate:(id)arg2;
+ (id)pickerIdentity;
+ (bool)pickerSupportHome:(id)arg1 targetMediaProfileContainers:(id)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)init;
- (void)registerViewController:(id)arg1 forMediaProfiles:(id)arg2 andDelegate:(id)arg3;

@end
