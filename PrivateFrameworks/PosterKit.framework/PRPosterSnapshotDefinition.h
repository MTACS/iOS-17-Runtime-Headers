
@interface PRPosterSnapshotDefinition : NSObject <NSCopying> {
    bool  _includesComplications;
    bool  _includesHeaderElements;
    unsigned long long  _layerSet;
    NSArray * _levelSets;
    unsigned long long  _previewContent;
    long long  _renderingContent;
    long long  _renderingMode;
    NSString * _uniqueIdentifier;
    bool  _unlocked;
}

@property (nonatomic, readonly) bool includesComplications;
@property (nonatomic, readonly) bool includesHeaderElements;
@property (nonatomic, readonly) unsigned long long layerSet;
@property (nonatomic, readonly, copy) NSArray *levelSets;
@property (nonatomic, readonly) unsigned long long previewContent;
@property (nonatomic, readonly) long long renderingContent;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (getter=isUnlocked, nonatomic, readonly) bool unlocked;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (long long)snapshotOptionsForDefinition:(id)arg1;

- (void).cxx_destruct;
- (void)applySceneSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)includesComplications;
- (bool)includesHeaderElements;
- (id)initWithUniqueIdentifier:(id)arg1 includeHeaderElements:(bool)arg2 includesComplications:(bool)arg3 layerSet:(unsigned long long)arg4 isUnlocked:(bool)arg5 renderingContent:(long long)arg6 renderingMode:(long long)arg7 previewContent:(unsigned long long)arg8;
- (id)initWithUniqueIdentifier:(id)arg1 includeHeaderElements:(bool)arg2 includesComplications:(bool)arg3 levelSets:(id)arg4 isUnlocked:(bool)arg5 renderingContent:(long long)arg6 renderingMode:(long long)arg7 previewContent:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDefinition:(id)arg1;
- (bool)isUnlocked;
- (unsigned long long)layerSet;
- (id)levelSets;
- (unsigned long long)previewContent;
- (long long)renderingContent;
- (long long)renderingMode;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices

+ (id)ambientPosterSnapshotDefinitionWithIdentifier:(id)arg1 ambientPresentationSettings:(id)arg2;
+ (id)ambientPosterSnapshotDefinitions;
+ (id)defaultAmbientPosterSnapshotDefinition;
+ (id)redmodeAmbientPosterSnapshotDefinition;

@end
