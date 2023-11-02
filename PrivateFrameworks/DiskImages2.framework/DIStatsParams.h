
@interface DIStatsParams : DIBaseParams {
    NSUUID * _statInstanceID;
}

@property (nonatomic, readonly, copy) NSUUID *instanceID;
@property (nonatomic, readonly, copy) NSUUID *statInstanceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 instanceId:(id)arg2 error:(id*)arg3;
- (id)instanceID;
- (id)statInstanceID;
- (id)statsWithError:(id*)arg1;

@end
