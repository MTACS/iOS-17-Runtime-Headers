
@interface HDSimpleGraphRelationship : HDSimpleGraphObject {
    long long  _objectID;
    long long  _subjectID;
    long long  _type;
}

@property (nonatomic, readonly) long long objectID;
@property (nonatomic, readonly) long long subjectID;
@property (nonatomic, readonly) long long type;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRowID:(long long)arg1 subjectID:(long long)arg2 type:(long long)arg3 objectID:(long long)arg4;
- (id)initWithRowID:(long long)arg1 subjectID:(long long)arg2 type:(long long)arg3 objectID:(long long)arg4 version:(long long)arg5 slots:(unsigned long long)arg6;
- (id)initWithRowID:(long long)arg1 version:(long long)arg2 slots:(unsigned long long)arg3 deleted:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (long long)objectID;
- (long long)subjectID;
- (long long)type;

@end
