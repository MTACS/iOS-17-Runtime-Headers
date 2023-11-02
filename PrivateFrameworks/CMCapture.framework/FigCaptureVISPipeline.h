
@interface FigCaptureVISPipeline : FigCapturePipeline {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _irisVISCleanOutputRect;
    BWMotionAttachmentsNode * _motionAttachmentsNode;
    BWVISNode * _sdofVISNode;
    BWVISNode * _visNode;
}

+ (void)initialize;

- (void)dealloc;

@end
