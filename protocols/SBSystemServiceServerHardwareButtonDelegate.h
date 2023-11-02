
@protocol SBSystemServiceServerHardwareButtonDelegate <SBSystemServiceServerDelegate>

@required

- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 acquireAssertionOfType:(void *)arg3 forReason:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSAction *, void*
- (void)systemServiceServer:(void *)arg1 client:(void *)arg2 fetchHapticTypeForButtonKind:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: SBSystemServiceServer *, <FBSServiceFacilityClientHandle> *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 requestsHIDEvents:(bool)arg3 token:(BKSHIDEventDeferringToken *)arg4 forButtonKind:(long long)arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 clientDidDisconnect:(id <FBSServiceFacilityClientHandle>)arg2;

@end
