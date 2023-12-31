
@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal * _mediaSelection;
}

@property (nonatomic, readonly) AVAsset *asset;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

- (void)_createDefaultMediaSelectionOptions;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_groupDictionaries;
- (id)_initWithAsset:(id)arg1;
- (id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2;
- (id)_initWithAssetWithoutGroupDictionaries:(id)arg1;
- (id)_initWithDeferredLoadingOfAsset:(id)arg1 selectedMediaArray:(id)arg2;
- (id)_internal;
- (void)_loadiVarsIfNeeded;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)_selectedMediaArray;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 propertyList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyList;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (id)tvp_description;

@end
