
@interface CVNLPTextDecodingConfiguration : NSObject {
    id /* block */  _commitActionBlock;
}

@property (nonatomic) id /* block */ commitActionBlock;

+ (id /* block */)defaultCharacterCommitActionBehavior;
+ (id /* block */)defaultCommitActionBehaviorForLocale:(id)arg1;
+ (id /* block */)defaultWhitespaceCommitActionBehavior;

- (id /* block */)commitActionBlock;
- (id)initWithCommitActionBehavior:(id /* block */)arg1;
- (void)setCommitActionBlock:(id /* block */)arg1;

@end
