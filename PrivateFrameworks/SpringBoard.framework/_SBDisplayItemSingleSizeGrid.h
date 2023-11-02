
@interface _SBDisplayItemSingleSizeGrid : NSObject <_SBDisplayItemGridProvider> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)allHeights;
- (id)allWidths;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (struct CGSize { double x1; double x2; })nearestGridSizeForSize:(struct CGSize { double x1; double x2; })arg1 countOnStage:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeAtIndexFromFullWidthForBounds:(unsigned long long)arg1;

@end
