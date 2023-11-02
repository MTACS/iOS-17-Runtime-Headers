
@interface PUWallpaperDebugViewSpec : NSObject {
    unsigned long long  _viewMode;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionViewContentInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } headerReferenceSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, readonly) unsigned long long viewMode;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewContentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerInsets;
- (struct CGSize { double x1; double x2; })headerReferenceSize;
- (id)initWithViewMode:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (unsigned long long)viewMode;

@end
