
@interface SXDebugComponentAssembly : NSObject <TFAssembly>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)loadInRegistry:(id)arg1;

@end
