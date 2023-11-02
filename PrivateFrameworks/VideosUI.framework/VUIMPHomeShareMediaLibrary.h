
@interface VUIMPHomeShareMediaLibrary : VUIMPMediaLibrary <VUIHomeShareMediaLibrary>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)enqueueKeepAliveWithCompletion:(id /* block */)arg1;

@end
