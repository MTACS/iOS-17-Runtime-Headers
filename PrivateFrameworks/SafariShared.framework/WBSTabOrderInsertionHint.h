
@interface WBSTabOrderInsertionHint : NSObject {
    unsigned long long  _insertionIndex;
    unsigned long long  _relationType;
    <WBSOrderedTab> * _tabToInsertAfter;
}

@property (nonatomic, readonly) unsigned long long insertionIndex;
@property (nonatomic, readonly) unsigned long long relationType;
@property (nonatomic, readonly) <WBSOrderedTab> *tabToInsertAfter;

- (void).cxx_destruct;
- (id)initWithTabToInsertAfter:(id)arg1 insertionIndex:(unsigned long long)arg2 relation:(unsigned long long)arg3;
- (id)initWithTabToInsertAfter:(id)arg1 relation:(unsigned long long)arg2;
- (unsigned long long)insertionIndex;
- (unsigned long long)relationType;
- (id)tabToInsertAfter;

@end
