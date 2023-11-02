
@interface ATXChinSuggestionRequest : NSObject {
    id /* block */  _acceptedBlock;
    unsigned long long  _debugIdentifier;
    id /* block */  _rejectedBlock;
}

@property (nonatomic, readonly) id /* block */ acceptedBlock;
@property (nonatomic) unsigned long long debugIdentifier;
@property (nonatomic, readonly) id /* block */ rejectedBlock;

- (void).cxx_destruct;
- (id /* block */)acceptedBlock;
- (unsigned long long)debugIdentifier;
- (id)description;
- (id)initWithAcceptedBlock:(id /* block */)arg1 rejectedBlock:(id /* block */)arg2;
- (id /* block */)rejectedBlock;
- (void)setDebugIdentifier:(unsigned long long)arg1;

@end
