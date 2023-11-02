
@interface WDListDefinitionTable : NSObject {
    WDListDefinition * mDefaultListDefinition;
    WDDocument * mDocument;
    NSMutableDictionary * mListDefinitionMapById;
    NSMutableDictionary * mListDefinitionMapByStyleId;
    NSMutableArray * mListDefinitions;
    WDListDefinition * mNullListDefinition;
}

- (void).cxx_destruct;
- (id)addDefinitionWithDefinitionId:(int)arg1 styleId:(id)arg2;
- (id)definitionWithDefinitionId:(int)arg1;
- (id)definitionWithStyleId:(id)arg1;
- (id)definitions;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)resolvedDefinitionWithDefinitionId:(int)arg1;

@end
