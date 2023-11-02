
@interface SiriTTSSynthesisEngineWordTimings : NSObject {
    double  _startTime;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
}

@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;

- (void)setStartTime:(double)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)startTime;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;

@end
