
@protocol TSTCellRegionIterating <NSObject>

@required

- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })getNext;
- (id)initWithCellRegion:(TSTCellRegion *)arg1;
- (void)terminate;

@end
