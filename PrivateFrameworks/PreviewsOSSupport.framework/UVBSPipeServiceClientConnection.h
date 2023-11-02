
@interface UVBSPipeServiceClientConnection : UVBSPipeServiceConnection <UVBSClientConnection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createForSystem:(long long)arg1 variant:(long long)arg2 error:(id*)arg3;
+ (id)createWithEndpoint:(id)arg1 error:(id*)arg2;

@end
