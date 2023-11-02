
@interface PDFPageViewAnnotationController : NSObject {
    PDFPageViewAnnotationControllerPrivate * _private;
}

- (void).cxx_destruct;
- (void)_addPopupForAnnotation:(id)arg1;
- (void)_didRotatePageNotification:(id)arg1;
- (id)_getIndexSetIntersectionBetween:(id)arg1 and:(id)arg2;
- (bool)_indexSet:(id)arg1 touchesIndexSet:(id)arg2;
- (id)_markupAnnotationsForExactIndexSet:(id)arg1;
- (void)_propagateNotesForIndexSet:(id)arg1;
- (void)_rotateActiveAnnotation;
- (id)activeAnnotation;
- (void)addControlForAnnotation:(id)arg1;
- (void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2;
- (void)dealloc;
- (id)initWithPDFPageView:(id)arg1;
- (id)markupAnnotationsForIndexSet:(id)arg1;
- (void)removeControlForAnnotation:(id)arg1;

@end
