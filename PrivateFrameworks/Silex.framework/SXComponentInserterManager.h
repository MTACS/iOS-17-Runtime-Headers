
@interface SXComponentInserterManager : NSObject <SXComponentInserterManager> {
    NSMutableArray * _mutableInserters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inserters;
@property (nonatomic, readonly) NSMutableArray *mutableInserters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addInserter:(id)arg1;
- (id)init;
- (id)inserters;
- (id)mutableInserters;
- (void)removeInserter:(id)arg1;

@end
