
@interface ESLocalDBWatcherDBInfo : NSObject {
    NSMutableDictionary * _blocksByConcernedParty;
    int  _lastSavedSequenceNumber;
    NSString * _path;
}

@property (nonatomic, retain) NSMutableDictionary *blocksByConcernedParty;
@property (nonatomic) int lastSavedSequenceNumber;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)addBlock:(id /* block */)arg1 forConcernedParty:(id)arg2 account:(id)arg3;
- (id)allBlocks;
- (id)allConcernedParties;
- (id)blocksByConcernedParty;
- (id)initWithPath:(id)arg1;
- (int)lastSavedSequenceNumber;
- (id)path;
- (void)removeBlockForConcernedParty:(id)arg1 account:(id)arg2;
- (void)setBlocksByConcernedParty:(id)arg1;
- (void)setLastSavedSequenceNumber:(int)arg1;

@end
