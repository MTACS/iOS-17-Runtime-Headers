
@interface CKParticipantsTrie : NSObject {
    NSMutableArray * _children;
    NSMutableArray * _entities;
    NSString * _key;
}

@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (void)_addEntity:(id)arg1 named:(id)arg2 forCharacters:(id)arg3;
- (id)_composedCharactersForString:(id)arg1 appendRootKey:(bool)arg2;
- (id)_lastNodeForString:(id)arg1;
- (bool)_trieContainsEntity:(id)arg1;
- (void)addParticipantName:(id)arg1 entity:(id)arg2;
- (id)children;
- (id)entities;
- (id)entitiesForPrefix:(id)arg1;
- (bool)hasPrefix:(id)arg1;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)key;
- (void)loadHandleEntityFromLastNode:(id)arg1 intoResult:(id)arg2;
- (id)rawHandlesForParticipantName:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setKey:(id)arg1;

@end
