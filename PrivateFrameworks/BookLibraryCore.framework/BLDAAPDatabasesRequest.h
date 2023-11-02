
@interface BLDAAPDatabasesRequest : BLDAAPURLRequest {
    NSNumber * _delta;
}

@property (nonatomic, copy) NSNumber *delta;

- (void).cxx_destruct;
- (id)delta;
- (id)initWithDSID:(id)arg1 reason:(long long)arg2 sessionID:(id)arg3 revisionNumber:(id)arg4 delta:(id)arg5;
- (void)setDelta:(id)arg1;

@end
