
@interface HMHAPMetadataCategory : NSObject <HMHAPMetadataCategory> {
    NSString * _catDescription;
    NSNumber * _identifier;
    NSString * _uuidStr;
}

@property (nonatomic, retain) NSString *catDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (id)catDescription;
- (id)identifier;
- (void)setCatDescription:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (id)uuidStr;

@end
