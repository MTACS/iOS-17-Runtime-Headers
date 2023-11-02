
@interface TTSRegexMatch : NSObject {
    NSArray * _captureGroups;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _utf8Range;
}

@property (nonatomic, retain) NSArray *captureGroups;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } utf8Range;

- (void).cxx_destruct;
- (id)captureGroups;
- (void)setCaptureGroups:(id)arg1;
- (void)setUtf8Range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })utf8Range;

@end
