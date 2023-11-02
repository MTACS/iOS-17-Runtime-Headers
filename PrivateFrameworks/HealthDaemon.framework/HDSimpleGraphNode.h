
@interface HDSimpleGraphNode : HDSimpleGraphObject {
    NSArray * _attributes;
    NSArray * _relationships;
}

@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, readonly) NSArray *relationships;

- (void).cxx_destruct;
- (id)attributes;
- (id)description;
- (id)init;
- (id)initWithRowID:(long long)arg1 attributes:(id)arg2 relationships:(id)arg3;
- (id)initWithRowID:(long long)arg1 attributes:(id)arg2 relationships:(id)arg3 version:(long long)arg4 slots:(unsigned long long)arg5 deleted:(bool)arg6;
- (id)relationships;

@end
