
@interface VITextBlockAnnotation : NSObject <NSCopying> {
    NSArray * _textAnnotations;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *textAnnotations;

+ (id)empty;
+ (id)textBlockWithAnnotations:(id)arg1;
+ (id)textBlockWithDocumentObservations:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithTextAnnotations:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)textAnnotations;

@end
