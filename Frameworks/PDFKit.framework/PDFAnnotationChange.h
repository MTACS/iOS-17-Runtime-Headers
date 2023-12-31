
@interface PDFAnnotationChange : NSObject {
    PDFAnnotationChangePrivate * _private;
}

@property (nonatomic, readonly, retain) PDFAnnotation *annotation;
@property (nonatomic, readonly) unsigned long long changeTimestamp;
@property (nonatomic, readonly) int changeType;

- (void).cxx_destruct;
- (id)annotation;
- (unsigned long long)changeTimestamp;
- (int)changeType;
- (id)description;
- (id)initWithAddedAnnotation:(id)arg1;
- (id)initWithChangedAnnotation:(id)arg1;
- (id)initWithRemovedAnnotation:(id)arg1;
- (id)initWithReorderedAndChangedAnnotation:(id)arg1;
- (id)initWithReorderedAnnotation:(id)arg1;

@end
