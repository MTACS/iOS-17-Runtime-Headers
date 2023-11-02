
@interface ICPDFAttachmentRenderOperation : NSOperation {
    ICAttachment * _attachment;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    ICPDFAttachmentView * _view;
    double  _width;
}

@property (readonly) ICAttachment *attachment;
@property double scale;
@property struct CGSize { double x1; double x2; } size;
@property ICPDFAttachmentView *view;
@property (readonly) double width;

- (void).cxx_destruct;
- (id)attachment;
- (id)generateImageForPrinting;
- (id)initWithView:(id)arg1;
- (void)main;
- (double)scale;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setView:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)view;
- (double)width;

@end
