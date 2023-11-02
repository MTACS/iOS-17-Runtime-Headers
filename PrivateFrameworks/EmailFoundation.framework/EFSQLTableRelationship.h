
@interface EFSQLTableRelationship : NSObject {
    EFSQLColumnSchema * _destinationColumn;
    bool  _isProtectedTable;
    EFSQLColumnSchema * _sourceColumn;
    NSString * _tableAlias;
    bool  _useLeftOuterJoin;
}

@property (nonatomic, readonly) EFSQLColumnSchema *destinationColumn;
@property (readonly) bool isProtectedTable;
@property (nonatomic, readonly) EFSQLColumnSchema *sourceColumn;
@property (nonatomic, readonly) NSString *tableAlias;
@property (readonly) bool useLeftOuterJoin;

- (void).cxx_destruct;
- (id)destinationColumn;
- (id)initWithSourceColumn:(id)arg1 destinationColumn:(id)arg2 useLeftOuterJoin:(bool)arg3;
- (id)initWithSourceColumn:(id)arg1 destinationColumn:(id)arg2 useLeftOuterJoin:(bool)arg3 tableAlias:(id)arg4 isProtectedTable:(bool)arg5;
- (bool)isProtectedTable;
- (id)sourceColumn;
- (id)tableAlias;
- (bool)useLeftOuterJoin;

@end
