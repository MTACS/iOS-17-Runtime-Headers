
@interface MPModelPlaylistAuthor : MPModelObject

@property (nonatomic, readonly) bool isPendingApproval;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic) unsigned long long role;
@property (nonatomic, retain) MPModelSocialPerson *socialProfile;

+ (void)__MPModelPropertyPlaylistAuthorIsPendingApproval__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistAuthorRole__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistAuthorPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistAuthorSocialProfile__MAPPING_MISSING__;
+ (id)__isPendingApproval_KEY;
+ (id)__playlist_KEY;
+ (id)__role_KEY;
+ (id)__socialProfile_KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;

@end
