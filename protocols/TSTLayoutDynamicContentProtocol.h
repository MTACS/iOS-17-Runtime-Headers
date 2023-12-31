
@protocol TSTLayoutDynamicContentProtocol <NSObject>

@required

- (bool)cell:(id*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)dynamicContentMustDrawOnMainThread;

@optional

- (bool)mergeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;

@end
