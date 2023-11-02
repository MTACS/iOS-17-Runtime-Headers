
@interface FCRemoveRecordsCommand : FCCommand {
    NSArray * _recordIDs;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;

@end
