
@interface ISCGImageBlockSet : NSObject {
    struct CGImageBlockSet { } * _blockSet;
}

@property struct CGImageBlockSet { }*blockSet;

- (struct CGImageBlockSet { }*)blockSet;
- (void)dealloc;
- (id)initWithBlockSet:(struct CGImageBlockSet { }*)arg1;
- (void)setBlockSet:(struct CGImageBlockSet { }*)arg1;

@end
