
@interface ICOrderedMediaSet : NSObject {
    NSMutableDictionary * _mediaItems;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mediaLock;
}

@property (nonatomic, retain) NSMutableDictionary *mediaItems;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } mediaLock;

- (void)addMediaItemToIndex:(id)arg1;
- (id)arrayForType:(id)arg1;
- (void)dealloc;
- (id)initWithTypes:(id)arg1;
- (unsigned long long)mediaItemCount;
- (id)mediaItemWithHandle:(unsigned long long)arg1 inTypes:(id)arg2;
- (id)mediaItems;
- (struct os_unfair_lock_s { unsigned int x1; })mediaLock;
- (id)orderedSetForType:(id)arg1;
- (void)performSelector:(id)arg1 onTypes:(id)arg2;
- (void)removeAllItems;
- (bool)removeMediaItemFromIndex:(id)arg1;
- (bool)removeMediaItemWithHandleFromIndex:(unsigned long long)arg1;
- (bool)removeMediaItemsFromIndex:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
