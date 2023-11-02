
@interface VUIFamilyMembersRequestResponseParser : NSObject

- (id)_filterCurrentFamilyMember:(id)arg1 fromResults:(id)arg2;
- (id)_parseFamilyMemberIdentifierFromDictionary:(id)arg1 withKey:(id)arg2;
- (id)_processRawFamilyMemberResults:(id)arg1;
- (id)init;
- (id)parseAMSURLResult:(id)arg1;

@end
