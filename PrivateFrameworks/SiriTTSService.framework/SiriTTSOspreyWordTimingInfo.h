
@interface SiriTTSOspreyWordTimingInfo : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
    double  _timestamp;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property (nonatomic) double timestamp;

- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (double)timestamp;

@end
