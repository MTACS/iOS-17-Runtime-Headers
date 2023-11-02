
@interface EMUbiquitouslyPersistedDictionaryMergeResult : NSObject {
    NSDictionary * _changedItems;
    NSArray * _deletedItems;
    bool  _requiresSynchronizing;
}

@property (nonatomic, readonly) NSDictionary *changedItems;
@property (nonatomic, readonly) NSArray *deletedItems;
@property (nonatomic, readonly) bool requiresSynchronizing;

- (void).cxx_destruct;
- (id)changedItems;
- (id)deletedItems;
- (id)initWithChangedItems:(id)arg1 deletedItems:(id)arg2 requiresSynchronizing:(bool)arg3;
- (bool)requiresSynchronizing;

@end
