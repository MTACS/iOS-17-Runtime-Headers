
@interface PKSecureElement_HWManagerEventListener : NSObject <NFHardwareEventListener>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)secureElement:(id)arg1 didChangeRestrictedMode:(bool)arg2;

@end
