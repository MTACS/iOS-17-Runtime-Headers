
@interface NSSQLiteStatementCache : NSObject {
    NSSQLiteStatement * _batchInsertStatementCache;
    struct __CFDictionary { } * _correlationDeleteCache;
    struct __CFDictionary { } * _correlationInsertCache;
    struct __CFDictionary { } * _correlationMasterReorderCache;
    struct __CFDictionary { } * _correlationMasterReorderCachePart2;
    struct __CFDictionary { } * _correlationReorderCache;
    NSSQLiteStatement * _deletionStatementCache;
    NSSQLEntity * _entity;
    NSSQLiteStatement * _faultingStatementCache;
    NSSQLiteStatement * _insertStatementCache;
    NSMutableDictionary * _toManyRelationshipStatementCache;
}

- (void)dealloc;
- (id)initWithEntity:(id)arg1;

@end
