
@interface WBSParsecResultSetPattern : NSObject {
    NSRegularExpression * _regularExpression;
}

+ (id)_nextTokenInResultSetPattern:(id)arg1;
+ (id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1;
+ (id)_regularExpressionPatternForToken:(id)arg1;
+ (id)_regularExpressionPatternFromResultSetPattern:(id)arg1;
+ (id)patternWithString:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithRegularExpression:(id)arg1;
- (bool)isMatchedByString:(id)arg1;

@end
