
@interface _IKDOMPrototypeDerivationRules : NSObject {
    NSArray * _indexPath;
    NSArray * _mutationRules;
}

@property (nonatomic, readonly, copy) NSArray *indexPath;
@property (nonatomic, readonly, copy) NSArray *mutationRules;

+ (id)derivationRulesForDOMElement:(id)arg1;
+ (void)removeRulesFromDOMElement:(id)arg1;

- (void).cxx_destruct;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 mutationRules:(id)arg2;
- (id)mutationRules;

@end
