
@interface SGMIWarningsDetectionRegexMatch : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _coreRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _signature;
    NSArray * _wildcardsMatches;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } coreRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSArray *wildcardsMatches;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })coreRange;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 coreRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 signature:(id)arg3 wildcardsMatches:(id)arg4;
- (unsigned long long)length;
- (unsigned long long)location;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)signature;
- (id)wildcardsMatches;

@end
