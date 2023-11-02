
@interface FAHomeUISoftLinking : NSObject <HUAddPeopleViewControllerDelegate> {
    HUAddPeopleViewController * _addPeopleController;
    NSString * _homeReloadSignal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getHomeImage;
+ (id)getURLScheme;

- (void).cxx_destruct;
- (void)addPeopleViewController:(id)arg1 didSendInvitations:(id)arg2;
- (void)addPeopleViewControllerDidCancel:(id)arg1;
- (id)getPeopleAddController;
- (id)initWithHome:(id)arg1 notificationName:(id)arg2;

@end
