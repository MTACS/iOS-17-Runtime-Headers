
@interface FPDItemIteratorEnumState : NSObject {
    <FPXPCAutomaticErrorProxy><FPXEnumerator> * _enumerator;
    NSData * _nextPage;
    FPItem * _parentItem;
}

@property (nonatomic, retain) <FPXPCAutomaticErrorProxy><FPXEnumerator> *enumerator;
@property (nonatomic, retain) NSData *nextPage;
@property (nonatomic, retain) FPItem *parentItem;

- (void).cxx_destruct;
- (id)enumerator;
- (id)nextPage;
- (id)parentItem;
- (void)setEnumerator:(id)arg1;
- (void)setNextPage:(id)arg1;
- (void)setParentItem:(id)arg1;

@end
