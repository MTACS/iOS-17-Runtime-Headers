
@interface PXGSpriteMetadataStore : NSObject {
    unsigned short  _numberOfResizableCapInsets;
    struct { float x1; float x2; float x3; float x4; } * _resizableCapInsets;
    unsigned short  _resizableCapInsetsCapacity;
}

@property (nonatomic, readonly) unsigned short numberOfResizableCapInsets;
@property (nonatomic, readonly) const struct { float x1; float x2; float x3; float x4; }*resizableCapInsets;

- (unsigned short)_indexOfResizableCapInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (unsigned short)addResizableCapInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)dealloc;
- (id)init;
- (unsigned short)numberOfResizableCapInsets;
- (const struct { float x1; float x2; float x3; float x4; }*)resizableCapInsets;

@end
