
@interface SGCNContactIdentifierCollection : NSObject {
    NSMutableData * _optimizedBuffer;
    NSMutableArray * _unoptimizedIdentifiers;
}

- (void).cxx_destruct;
- (bool)_optimizeAndAddCNContactIdentifier:(id)arg1;
- (void)addCNContactIdentifier:(id)arg1;
- (id)init;
- (id)proxyArray;

@end
