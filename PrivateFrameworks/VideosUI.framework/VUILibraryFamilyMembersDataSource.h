
@interface VUILibraryFamilyMembersDataSource : VUILibraryDataSource {
    NSArray * _familyMembers;
    VUIMediaAPIClient * _mediaClient;
}

@property (nonatomic, retain) NSArray *familyMembers;
@property (nonatomic, retain) VUIMediaAPIClient *mediaClient;

- (void).cxx_destruct;
- (void)_orderFamilyMembersByFirstName;
- (id)familyMembers;
- (id)init;
- (id)mediaClient;
- (void)setFamilyMembers:(id)arg1;
- (void)setMediaClient:(id)arg1;
- (void)startFetch;

@end
