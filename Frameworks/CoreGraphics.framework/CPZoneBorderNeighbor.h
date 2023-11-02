
@interface CPZoneBorderNeighbor : NSObject <CPCopying, NSCopying> {
    CPShape * neighborShape;
    int  shapeSide;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initSuper;
- (id)neighborShape;
- (void)setNeighborShape:(id)arg1;
- (void)setShapeSide:(int)arg1;
- (int)shapeSide;

@end
