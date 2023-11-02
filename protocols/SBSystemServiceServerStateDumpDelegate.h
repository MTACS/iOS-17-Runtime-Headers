
@protocol SBSystemServiceServerStateDumpDelegate <SBSystemServiceServerDelegate>

@required

- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 disableRemoteStateDumpWithCompletion:(void *)arg3; // needs 3 arg types, found 9: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 enableRemoteStateDumpWithTimeout:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 requestStateDump:(unsigned long long)arg3 toTextFileAtPath:(NSString *)arg4;
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 requestStateDump:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 11: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSString *, void*

@end
