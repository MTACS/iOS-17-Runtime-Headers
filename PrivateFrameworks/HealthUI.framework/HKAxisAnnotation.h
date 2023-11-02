
@interface HKAxisAnnotation : NSObject {
    NSAttributedString * _annotationText;
    id  _position;
}

@property (nonatomic, readonly) NSAttributedString *annotationText;
@property (nonatomic, readonly) id position;

- (void).cxx_destruct;
- (id)annotationText;
- (id)initWithAnnotation:(id)arg1 position:(id)arg2;
- (id)position;

@end
