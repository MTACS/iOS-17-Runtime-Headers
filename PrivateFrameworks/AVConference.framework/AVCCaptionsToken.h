
@interface AVCCaptionsToken : NSObject <VCCaptionsTranscriptionSegment> {
    double  _confidence;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _text;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *text;

- (double)confidence;
- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1 confidence:(double)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)text;

@end
