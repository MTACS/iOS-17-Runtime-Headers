
@interface _PXVisualDiagnosticsPageConfiguration : NSObject <PXVisualDiagnosticsPageConfiguration> {
    struct CGSize { 
        double width; 
        double height; 
    }  _pageSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } pageSize;

- (id)initWithConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })pageSize;
- (void)setPageSize:(struct CGSize { double x1; double x2; })arg1;

@end
