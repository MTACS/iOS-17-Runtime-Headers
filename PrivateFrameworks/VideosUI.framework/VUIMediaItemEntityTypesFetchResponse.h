
@interface VUIMediaItemEntityTypesFetchResponse : NSObject {
    bool  _localMediaItemsAvailable;
    NSOrderedSet * _mediaItemEntityTypes;
}

@property (getter=areLocalMediaItemsAvailable, nonatomic) bool localMediaItemsAvailable;
@property (nonatomic, copy) NSOrderedSet *mediaItemEntityTypes;

- (void).cxx_destruct;
- (bool)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(bool)arg3;
- (bool)areLocalMediaItemsAvailable;
- (id)description;
- (id)init;
- (id)mediaItemEntityTypes;
- (void)setLocalMediaItemsAvailable:(bool)arg1;
- (void)setMediaItemEntityTypes:(id)arg1;

@end
