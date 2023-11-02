
@interface _DKSyncContext : NSObject {
    NSString * _name;
    _DKKnowledgeStorage * _storage;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) _DKKnowledgeStorage *storage;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
