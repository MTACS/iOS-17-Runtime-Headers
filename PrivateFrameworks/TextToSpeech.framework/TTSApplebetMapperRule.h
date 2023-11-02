
@interface TTSApplebetMapperRule : NSObject {
    NSArray * _left;
    NSArray * _match;
    id /* block */  _matchRule;
    NSArray * _right;
    NSArray * _substitution;
}

@property (nonatomic, retain) NSArray *left;
@property (nonatomic, retain) NSArray *match;
@property (nonatomic, copy) id /* block */ matchRule;
@property (nonatomic, retain) NSArray *right;
@property (nonatomic, retain) NSArray *substitution;

+ (id)ruleWithHeterogeniousArray:(id)arg1;

- (void).cxx_destruct;
- (id)left;
- (id)match;
- (id /* block */)matchRule;
- (id)right;
- (void)setLeft:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setMatchRule:(id /* block */)arg1;
- (void)setRight:(id)arg1;
- (void)setSubstitution:(id)arg1;
- (id)substitution;

@end
