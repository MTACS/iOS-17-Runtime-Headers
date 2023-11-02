
@interface DCPDFGenerator : NSObject {
    NSMutableData * _data;
    NSURL * _fileURL;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pageRect;
    struct CGContext { } * _pdfContext;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pageRect;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)addPageWithPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 renderBlock:(id /* block */)arg2;
- (void)addPageWithRenderBlock:(id /* block */)arg1;
- (id)data;
- (void)dealloc;
- (id)fileURL;
- (void)finishGenerating;
- (id)init;
- (id)initWithMutableData:(id)arg1 pageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 title:(id)arg3;
- (id)initWithURL:(id)arg1 pageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 title:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageRect;
- (void)setData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (bool)startGenerating;
- (id)title;
- (id)url;

@end