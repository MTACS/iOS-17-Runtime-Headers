
@interface WDList : NSObject {
    WDDocument * mDocument;
    NSMutableArray * mLevelOverrides;
    int  mListDefinitionId;
    int  mListId;
}

@property (nonatomic, readonly) int listDefinitionId;
@property (nonatomic, readonly) int listId;

- (void).cxx_destruct;
- (id)addLevelOverrideWithLevel:(unsigned char)arg1;
- (id)description;
- (id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3;
- (bool)isAnyListLevelOverridden;
- (id)levelOverrideAt:(unsigned long long)arg1;
- (unsigned long long)levelOverrideCount;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (id)levelOverrides;
- (int)listDefinitionId;
- (int)listId;
- (void)removeLevelOverride:(id)arg1;

@end
