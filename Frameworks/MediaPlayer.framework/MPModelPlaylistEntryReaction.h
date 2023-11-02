
@interface MPModelPlaylistEntryReaction : MPModelObject

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) MPModelPlaylistEntry *playlistEntry;
@property (nonatomic, retain) NSString *reactionText;
@property (nonatomic, retain) MPModelSocialPerson *socialProfile;

+ (void)__MPModelPropertyPlaylistEntryReactionDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistEntryReactionText__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryReactionPlaylistEntry__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryReactionSocialProfile__MAPPING_MISSING__;
+ (id)__date_KEY;
+ (id)__playlistEntry_KEY;
+ (id)__reactionText_KEY;
+ (id)__socialProfile_KEY;

@end
