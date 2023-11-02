
@interface ISImageCache : NSObject {
    NSMutableDictionary * _imageBagsByDescriptor;
    NSData * _latestValidationToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (retain) NSMutableDictionary *imageBagsByDescriptor;
@property (readonly) NSData *latestValidationToken;
@property struct os_unfair_lock_s { unsigned int x1; } lock;

- (void).cxx_destruct;
- (id)allImages;
- (id)debugDescription;
- (id)imageBagsByDescriptor;
- (id)imageForDescriptor:(id)arg1;
- (id)init;
- (id)latestValidationToken;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setImage:(id)arg1 forDescriptor:(id)arg2;
- (void)setImageBagsByDescriptor:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
