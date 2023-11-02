
@interface HMHAPMetadataService : NSObject <HMHAPMetadataService> {
    NSString * _svcDescription;
    NSString * _uuidStr;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *svcDescription;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (void)setSvcDescription:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (id)svcDescription;
- (id)uuidStr;

@end
