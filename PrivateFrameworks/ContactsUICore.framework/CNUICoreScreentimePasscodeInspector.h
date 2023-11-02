
@interface CNUICoreScreentimePasscodeInspector : NSObject <CNUICoreScreentimePasscodeCheck>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)screentimePasscodeStatus;
- (unsigned long long)screentimePasscodeStatusOfDelegateWithInfo:(id)arg1;

@end
