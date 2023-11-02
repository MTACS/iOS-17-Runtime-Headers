
@interface SFCollaborationUserDefaults : NSObject

+ (id)sharedDefaults;

- (id)existingCollaborativeModeForContentIdentifier:(id)arg1;
- (void)setCollaborativeMode:(bool)arg1 contentIdentifier:(id)arg2;

@end
