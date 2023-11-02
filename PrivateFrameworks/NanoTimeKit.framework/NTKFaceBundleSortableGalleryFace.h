
@interface NTKFaceBundleSortableGalleryFace : NSObject {
    NTKFace * _face;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly) unsigned long long priority;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)face;
- (id)initWithFace:(id)arg1 priority:(unsigned long long)arg2;
- (unsigned long long)priority;

@end
