
@interface _UIPopoverHostManagerProviderMac : NSObject <_UIPopoverHostManagerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_defaultsUseNSPopover;
+ (id)managerForPresentationController:(id)arg1;
+ (id)sharedPopoverManager;

@end
