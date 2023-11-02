
@interface PDFPageAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> * _analyzerCallbackQueue;
    bool  _drawQuads;
    VKImageAnalyzer * _imageAnalyzer;
    double  _imageScale;
    NSMutableSet * _requestedPages;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _requestedPagesMutex;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_semaphore> * _workloadSemaphore;
}

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addFormElementsFromAnalysis:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toPage:(id)arg3;
- (void)_addFormElementsUsingDetectorToPage:(id)arg1 displayBox:(long long)arg2;
- (void)_addTextFromAnalysis:(id)arg1 ofImage:(id)arg2 toPDFPage:(id)arg3;
- (void)_callCompletionBlock:(id /* block */)arg1 onQueue:(id)arg2 analysis:(id)arg3 error:(id)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_computeEdgeInsetsForQuad:(id)arg1 inImage:(struct CGImage { }*)arg2 background:(unsigned char)arg3 glyphCount:(unsigned long long)arg4;
- (id)_createFreeTextAnnotationWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2 textContentType:(id)arg3 page:(id)arg4;
- (id)_detectedAnnotationWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 intersectsAnnotationOnPage:(id)arg2;
- (void)_drawTextFromAnalysis:(id)arg1 ofImage:(id)arg2 intoContext:(struct CGContext { }*)arg3 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGPoint { double x1; double x2; })_testPixelsFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 compare:(id /* block */)arg3;
- (void)analyzePage:(id)arg1 analysisTypes:(unsigned long long)arg2 completionQueue:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)init;

@end
