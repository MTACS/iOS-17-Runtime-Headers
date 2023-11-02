
@interface IDSFamilyService : IDSService <IDSDaemonListenerProtocol> {
    NSDictionary * _dsidToDeviceList;
    NSDictionary * _dsidToFamilyMember;
    NSSet * _familyMembers;
    NSMutableSet * familyHandles;
    NSString * listenerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *dsidToDeviceList;
@property (nonatomic, retain) NSDictionary *dsidToFamilyMember;
@property (nonatomic, retain) NSSet *familyMembers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dsidToDeviceList;
- (id)dsidToFamilyMember;
- (id)familyHandles;
- (id)familyMembers;
- (void)fetchFamilyMembersWithDevices:(id /* block */)arg1;
- (bool)isValidDestination:(id)arg1 error:(id*)arg2;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (void)service:(id)arg1 familyInfoUpdated:(id)arg2;
- (void)setDsidToDeviceList:(id)arg1;
- (void)setDsidToFamilyMember:(id)arg1;
- (void)setFamilyMembers:(id)arg1;

@end
