
@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject {
    bool  _localMediaItemsAvailableDidChange;
    VUICollectionChangeSet * _mediaItemEntityTypesChangeSet;
}

@property (nonatomic, readonly) bool localMediaItemsAvailableDidChange;
@property (nonatomic, readonly) VUICollectionChangeSet *mediaItemEntityTypesChangeSet;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(bool)arg2;
- (bool)localMediaItemsAvailableDidChange;
- (id)mediaItemEntityTypesChangeSet;

@end
