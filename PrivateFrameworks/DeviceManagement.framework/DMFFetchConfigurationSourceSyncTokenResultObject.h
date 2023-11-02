
@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject {
    NSString * _syncToken;
}

@property (nonatomic, copy) NSString *syncToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;

@end
