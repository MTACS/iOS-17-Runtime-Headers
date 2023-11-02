
@interface PXVisualDiagnosticsContext : NSObject {
    struct CGContext { } * _CGContext;
    PXVisualDiagnosticsConfiguration * _configuration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentPageBounds;
    NSURL * _fileURL;
}

@property (nonatomic, readonly) struct CGContext { }*CGContext;
@property (nonatomic, readonly) PXVisualDiagnosticsConfiguration *configuration;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentPageBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultPageSize;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) bool isPrivateDataAllowed;

- (void).cxx_destruct;
- (struct CGContext { }*)CGContext;
- (void)addPagesForTableWithConfiguration:(id /* block */)arg1 columnsConfiguration:(id /* block */)arg2 rowsConfiguration:(id /* block */)arg3;
- (void)addTitlePageWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)beginPage;
- (void)beginPageWithConfiguration:(id /* block */)arg1;
- (id)configuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentPageBounds;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultPageSize;
- (void)drawImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id /* block */)arg2;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id /* block */)arg2;
- (void)endPage;
- (id)fileURL;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 dataConsumer:(struct CGDataConsumer { }*)arg2;
- (bool)isPrivateDataAllowed;
- (void)strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id /* block */)arg2;

@end
