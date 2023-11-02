
@interface GameLayerPageGrid : NSObject {
    void centeringInsets;
    void columnCount;
    void columnSizeCategory;
    void columnWidth;
    void contentSizeCategory;
    void horizontalSizeClass;
    void interColumnSpacing;
    void minimumInsets;
    void representingWidth;
    void rowHeight;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } centeringInsets;
@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, readonly) double interColumnSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumInsets;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })centeringInsets;
- (long long)columnCount;
- (double)columnWidth;
- (id)init;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2 idealColumnSizeCategory:(long long)arg3;
- (id)initWithWidth:(double)arg1 columnSizeCategory:(long long)arg2 maxColumns:(id)arg3;
- (double)interColumnSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumInsets;

@end
