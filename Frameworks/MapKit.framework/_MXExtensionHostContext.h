
@interface _MXExtensionHostContext : _MXExtensionContext <_MXExtensionHostContextType> {
    <_MXExtensionURLHandling> * _URLHandlingDelegate;
}

@property (nonatomic) <_MXExtensionURLHandling> *URLHandlingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLHandlingDelegate;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setURLHandlingDelegate:(id)arg1;

@end
