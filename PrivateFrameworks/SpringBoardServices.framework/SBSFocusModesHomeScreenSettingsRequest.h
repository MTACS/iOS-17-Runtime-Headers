
@interface SBSFocusModesHomeScreenSettingsRequest : NSObject <BSDescriptionProviding, BSXPCSecureCoding> {
    bool  _appendExistingPages;
    bool  _excludeWallpaper;
    NSString * _focusModeIdentifier;
    NSArray * _listsToAdd;
    NSArray * _listsToRemove;
    NSArray * _proactivePages;
    double  _snapshotDelay;
    double  _snapshotScale;
}

@property (nonatomic) bool appendExistingPages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool excludeWallpaper;
@property (nonatomic, readonly, copy) NSString *focusModeIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *listsToAdd;
@property (nonatomic, retain) NSArray *listsToRemove;
@property (nonatomic, retain) NSArray *proactivePages;
@property (nonatomic) double snapshotDelay;
@property (nonatomic) double snapshotScale;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (bool)appendExistingPages;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (bool)excludeWallpaper;
- (id)focusModeIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithFocusModeIdentifier:(id)arg1;
- (id)listsToAdd;
- (id)listsToRemove;
- (id)proactivePages;
- (void)setAppendExistingPages:(bool)arg1;
- (void)setExcludeWallpaper:(bool)arg1;
- (void)setListsToAdd:(id)arg1;
- (void)setListsToRemove:(id)arg1;
- (void)setProactivePages:(id)arg1;
- (void)setSnapshotDelay:(double)arg1;
- (void)setSnapshotScale:(double)arg1;
- (double)snapshotDelay;
- (double)snapshotScale;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
