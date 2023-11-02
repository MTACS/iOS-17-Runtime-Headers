
@interface CalculateToken : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    UnitRanks * _ranks;
    NSString * _text;
    unsigned long long  _tokenType;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) UnitRanks *ranks;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned long long tokenType;

+ (id)tokenWithType:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 text:(id)arg3 ranks:(id)arg4;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 text:(id)arg3 ranks:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)ranks;
- (id)text;
- (unsigned long long)tokenType;

@end
