
@interface MKTableColumn : NSObject {
    int  _width;
}

@property (nonatomic) int width;

- (void)adjustWidthToFit:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)width;

@end
