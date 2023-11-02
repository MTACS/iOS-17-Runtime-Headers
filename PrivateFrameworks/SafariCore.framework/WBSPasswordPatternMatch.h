
@interface WBSPasswordPatternMatch : NSObject {
    double  _guessesRequired;
    NSString * _matchedSubstring;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long  _type;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) unsigned long long endIndex;
@property (nonatomic, readonly) double guessesRequired;
@property (nonatomic, readonly, copy) NSString *matchedSubstring;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)compactDescriptionWithMatchedStringColumnWidth:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)endIndex;
- (double)guessesRequired;
- (unsigned long long)hash;
- (id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithType:(unsigned long long)arg1 matchedSubstring:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 guessesRequired:(double)arg4 userInfo:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)matchedSubstring;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)type;
- (id)userInfo;

@end
