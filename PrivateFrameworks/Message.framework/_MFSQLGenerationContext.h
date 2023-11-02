
@interface _MFSQLGenerationContext : NSObject {
    unsigned int  baseTable;
    bool  haveLibraryIDCriterion;
    EFInt64Set * mailboxIDs;
    EFSQLPropertyMapper * propertyMapper;
    bool  protectedDataAvailable;
    EDSearchableIndex * searchableIndex;
    unsigned int  tables;
    bool  usedBaseTable;
}

- (void).cxx_destruct;

@end
