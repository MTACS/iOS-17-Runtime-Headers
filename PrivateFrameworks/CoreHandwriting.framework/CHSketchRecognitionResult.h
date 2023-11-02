
@interface CHSketchRecognitionResult : CHRecognitionResult {
    double  _rotation;
    NSString * _string;
}

@property (readonly) double rotation;
@property (readonly) NSString *string;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3;
- (double)rotation;
- (id)string;

@end
