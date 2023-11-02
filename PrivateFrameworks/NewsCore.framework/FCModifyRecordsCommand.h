
@interface FCModifyRecordsCommand : FCCommand {
    NSArray * _localRecords;
    id /* block */  _localRecordsGenerator;
    bool  _merge;
}

@property (nonatomic, readonly) NSArray *t_localRecords;

+ (id)desiredKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalRecords:(id)arg1 merge:(bool)arg2;
- (id)initWithLocalRecordsGenerator:(id /* block */)arg1 merge:(bool)arg2;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (id)t_localRecords;

@end
