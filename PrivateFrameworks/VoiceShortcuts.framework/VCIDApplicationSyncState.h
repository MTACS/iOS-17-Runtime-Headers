
@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing> {
    NSString * _checksum;
    NSDate * _registeredDate;
}

@property (nonatomic, copy) NSString *checksum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *registeredDate;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)checksum;
- (id)registeredDate;
- (void)setChecksum:(id)arg1;
- (void)setRegisteredDate:(id)arg1;

@end
