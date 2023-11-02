
@interface TTSStringTransformation : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _finalRange;
    unsigned long long  _offsetFromEnd;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _replacement;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } finalRange;
@property (nonatomic) unsigned long long offsetFromEnd;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *replacement;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })finalRange;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 andReplacement:(id)arg2;
- (unsigned long long)offsetFromEnd;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)replacement;
- (void)setFinalRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOffsetFromEnd:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReplacement:(id)arg1;
- (long long)sizeDelta;

@end
