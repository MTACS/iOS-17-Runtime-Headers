
@interface UIDictationSubstring : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _enclosingRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _string;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } enclosingRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })enclosingRange;
- (id)initWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 enclosingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setEnclosingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
