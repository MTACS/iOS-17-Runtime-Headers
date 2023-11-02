
@interface LPCSSResolver : NSObject {
    NSMutableDictionary * _localVariables;
    LPTheme * _theme;
}

@property (nonatomic, readonly) NSMutableDictionary *localVariables;
@property (nonatomic, readonly) LPTheme *theme;

- (void).cxx_destruct;
- (void)addStyle:(id)arg1 toElement:(id)arg2 inComponent:(id)arg3;
- (void)enumerateResolvedRulesFromRuleDictionary:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithTheme:(id)arg1;
- (id)localVariables;
- (id)resolveCSSValue:(id)arg1;
- (id)ruleDictionaryForStyle:(id)arg1 forComponentClass:(Class)arg2;
- (id)theme;

@end
