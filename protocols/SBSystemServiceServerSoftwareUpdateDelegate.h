
@protocol SBSystemServiceServerSoftwareUpdateDelegate <SBSystemServiceServerDelegate>

@required

- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 passcodePolicy:(void *)arg3; // needs 3 arg types, found 8: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setPasscodePolicy:(long long)arg3;

@end
