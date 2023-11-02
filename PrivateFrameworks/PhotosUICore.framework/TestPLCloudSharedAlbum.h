
@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)cloudGUID;
- (id)cloudOwnerDisplayNameIncludingEmail:(bool)arg1 allowsEmail:(bool)arg2;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (bool)cloudOwnerIsWhitelisted;
- (id)cloudOwnerLastName;
- (id)localizedTitle;

@end
