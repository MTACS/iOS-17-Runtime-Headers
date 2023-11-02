
@interface HDSimpleGraphAttribute : HDSimpleGraphObject {
    long long  _nodeID;
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) long long nodeID;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithRowID:(long long)arg1 type:(long long)arg2 value:(id)arg3 nodeID:(long long)arg4;
- (id)initWithRowID:(long long)arg1 type:(long long)arg2 value:(id)arg3 nodeID:(long long)arg4 version:(long long)arg5 slots:(unsigned long long)arg6;
- (long long)nodeID;
- (long long)type;
- (id)value;

@end
