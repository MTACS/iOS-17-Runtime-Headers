
@interface PHObjectChangeDetails : NSObject {
    bool  _assetCollectionTitlePropertiesChanged;
    bool  _assetContentChanged;
    PHObject * _objectAfterChanges;
    PHObject * _objectBeforeChanges;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (nonatomic, readonly) bool assetCollectionTitlePropertiesChanged;
@property (readonly) bool assetContentChanged;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) bool objectWasDeleted;

- (void).cxx_destruct;
- (void)_calculateDiffs;
- (bool)assetCollectionTitlePropertiesChanged;
- (bool)assetContentChanged;
- (id)description;
- (id)initWithPHObject:(id)arg1;
- (id)objectAfterChanges;
- (id)objectBeforeChanges;
- (bool)objectWasDeleted;

@end
