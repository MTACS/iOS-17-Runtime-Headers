
@interface HMHAPMetadataCharacteristic : NSObject <HMHAPMetadataCharacteristic> {
    NSString * _chrDescription;
    NSString * _uuidStr;
}

@property (nonatomic, retain) NSString *chrDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (id)chrDescription;
- (void)setChrDescription:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (id)uuidStr;

@end
