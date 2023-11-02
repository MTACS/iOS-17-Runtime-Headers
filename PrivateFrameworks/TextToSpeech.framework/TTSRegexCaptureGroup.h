
@interface TTSRegexCaptureGroup : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _utf8Range;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } utf8Range;

- (void)setUtf8Range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })utf8Range;

@end
