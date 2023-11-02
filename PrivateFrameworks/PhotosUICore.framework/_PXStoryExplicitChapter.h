
@interface _PXStoryExplicitChapter : NSObject <PXStoryChapter, PXStoryMutableChapter> {
    NSSet * _assetUUIDs;
    NSString * _firstAssetUUID;
    NSObject<NSCopying> * _identifier;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) NSSet *assetUUIDs;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSString *firstAssetUUID;
@property (nonatomic, readonly) NSObject<NSCopying> *identifier;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)assetUUIDs;
- (id)diagnosticDescription;
- (id)firstAssetUUID;
- (id)identifier;
- (id)initWithFirstAssetUUID:(id)arg1 assetUUIDs:(id)arg2;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
