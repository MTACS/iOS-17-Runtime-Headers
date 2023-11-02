
@interface WFControlFlowAttributionTracker : NSObject <NSSecureCoding> {
    NSMutableDictionary * _attributionSetsInScope;
}

@property (nonatomic, readonly) NSMutableDictionary *attributionSetsInScope;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributionSetForCurrentScope;
- (id)attributionSetsInScope;
- (id)contentCollectionByTaintingContentCollection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enteredScopeOfControlFlowAction:(id)arg1 withInput:(id)arg2;
- (id)init;
- (id)initWithAttributionSetsInScope:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)leftScopeOfControlFlowAction:(id)arg1;

@end
