
@interface CKAllowedSharingOptions : NSObject <NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding> {
    unsigned long long  _allowedParticipantAccessOptions;
    unsigned long long  _allowedParticipantPermissionOptions;
    NSArray * _mutableOptionsGroups;
    _SWCollaborationShareOptions * _mutableShareOptions;
    bool  _supportAllowingAddedParticipantsToInviteOthers;
}

@property unsigned long long allowedParticipantAccessOptions;
@property unsigned long long allowedParticipantPermissionOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *mutableOptionsGroups;
@property (nonatomic, retain) _SWCollaborationShareOptions *mutableShareOptions;
@property (nonatomic, readonly) NSArray *optionsGroups;
@property (nonatomic, readonly) _SWCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property bool supportAllowingAddedParticipantsToInviteOthers;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (void)initialize;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)resolvedOptionsFromOptions:(id)arg1 forExistingShare:(id)arg2;
+ (id)standardOptions;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (void)_addOptions:(id)arg1 toExistingGroupWithID:(id)arg2 inOptionsGroups:(id)arg3;
- (bool)_optionsGroupsOnlyContainsSingleOptionInPermissionArrayAndWhoCanAccessArray:(id)arg1;
- (void)_removeOptionGroupWithID:(id)arg1 fromOptionsGroups:(id)arg2;
- (void)_resolveCollaborationOptionsGroupsForExistingShare:(id)arg1;
- (void)_selectOptionWithIdentifier:(id)arg1 inGroups:(id)arg2;
- (id)_uncachedCollaborationOptionsGroupsFromAllowedOptions;
- (id)_uncachedShareOptionsFromAllowedOptions;
- (unsigned long long)allowedParticipantAccessOptions;
- (unsigned long long)allowedParticipantPermissionOptions;
- (id)collaborationOptionsGroupsFromAllowedOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAllowedParticipantPermissionOptions:(unsigned long long)arg1 allowedParticipantAccessOptions:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)mutableOptionsGroups;
- (id)mutableShareOptions;
- (id)optionsGroups;
- (void)setAllowedParticipantAccessOptions:(unsigned long long)arg1;
- (void)setAllowedParticipantPermissionOptions:(unsigned long long)arg1;
- (void)setMutableOptionsGroups:(id)arg1;
- (void)setMutableShareOptions:(id)arg1;
- (void)setSupportAllowingAddedParticipantsToInviteOthers:(bool)arg1;
- (id)shareOptions;
- (id)shareOptionsFromAllowedOptions;
- (bool)supportAllowingAddedParticipantsToInviteOthers;

@end
