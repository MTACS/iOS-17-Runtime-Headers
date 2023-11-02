
@interface NSSQLJoinIntermediate : NSSQLIntermediate {
    NSString * _correlationAlias;
    NSString * _destinationAlias;
    bool  _direct;
    NSSQLRelationship * _relationship;
    NSString * _sourceAlias;
    unsigned long long  _type;
}

- (void)dealloc;
- (id)description;
- (id)generateSQLStringInContext:(id)arg1;

@end
