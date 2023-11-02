
@interface TTSReplacement : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _replacement;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *replacement;

- (void).cxx_destruct;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)replacement;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReplacement:(id)arg1;

@end
