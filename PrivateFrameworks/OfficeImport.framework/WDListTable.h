
@interface WDListTable : NSObject {
    WDList * mDefaultList;
    WDDocument * mDocument;
    NSMutableDictionary * mListMapById;
    NSMutableArray * mLists;
    WDList * mNullList;
}

- (void).cxx_destruct;
- (id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)listAt:(unsigned long long)arg1;
- (unsigned long long)listCount;
- (id)listWithListId:(int)arg1;
- (id)lists;

@end
