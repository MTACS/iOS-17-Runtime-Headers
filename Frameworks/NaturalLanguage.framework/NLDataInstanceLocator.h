
@interface NLDataInstanceLocator : NSObject {
    unsigned long long  _instanceIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfCharacters;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfTokens;
}

@property (readonly) unsigned long long instanceIndex;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfCharacters;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfTokens;

- (id)description;
- (id)initWithInstanceIndex:(unsigned long long)arg1 rangeOfCharacters:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 rangeOfTokens:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)instanceIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacters;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTokens;

@end
