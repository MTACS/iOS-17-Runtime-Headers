
@interface MPHSBrowserDelegate : NSObject <HSBrowserDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)browser:(id)arg1 didAddLibrary:(id)arg2;
- (void)browser:(id)arg1 didRemoveLibrary:(id)arg2;

@end
