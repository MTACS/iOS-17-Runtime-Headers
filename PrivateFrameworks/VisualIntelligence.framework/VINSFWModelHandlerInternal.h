
@interface VINSFWModelHandlerInternal : NSObject {
    SCMLHandler * _scmlHandler;
}

+ (bool)isSensitiveLabelScore:(id)arg1 confidenceScore:(double)arg2 classificationMode:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithPreferredMetalDevice:(id)arg1;

@end
