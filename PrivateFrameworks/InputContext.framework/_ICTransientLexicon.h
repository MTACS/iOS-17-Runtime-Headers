
@interface _ICTransientLexicon : NSObject {
    NSMutableDictionary * _entityToAdditionalDataMap;
    NSMutableDictionary * _entityToTokenIdentifiersMap;
    unsigned int  _identifier;
    struct _LXLexicon { } * _lexicon;
    NSString * _name;
    NSMutableDictionary * _tokenIdentifierToEntitiesMap;
    unsigned char  _typeFlags;
}

@property (nonatomic, readonly) unsigned long long entryCount;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char typeFlags;

+ (id)transientLexiconForIdentifier:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)addEntity:(id)arg1 asAliasOfEntity:(id)arg2;
- (void)addEntity:(id)arg1 forEntry:(id)arg2;
- (bool)contains:(id)arg1;
- (bool)containsEntity:(id)arg1;
- (void)createAdditionalDataForEntityIfNeeded:(id)arg1;
- (void)dealloc;
- (bool)entityIsHyphenatedWord:(id)arg1;
- (unsigned long long)entryCount;
- (id)getEntries;
- (id)getEntryRefCount:(id)arg1;
- (struct _LXLexicon { }*)getLexiconImplementation;
- (id)getUsageCount:(id)arg1;
- (id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2;
- (id)name;
- (id)namedEntitiesForEntry:(id)arg1;
- (void)removeAllEntities;
- (void)removeEntity:(id)arg1;
- (void)setIsHyphenatedWord:(bool)arg1 forEntity:(id)arg2;
- (id)sortKeyEquivalents:(id)arg1;
- (unsigned char)typeFlags;

@end
