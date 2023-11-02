
@interface NUExtensionAssembly : NSObject <TFAssembly> {
    <NUExtensionContextProvider> * _extensionContextProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUExtensionContextProvider> *extensionContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensionContextProvider;
- (id)initWithExtensionContextProvider:(id)arg1;
- (void)loadInRegistry:(id)arg1;

@end
