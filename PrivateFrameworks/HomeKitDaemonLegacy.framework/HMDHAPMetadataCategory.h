
@interface HMDHAPMetadataCategory : HMFObject <HMHAPMetadataCategory> {
    NSString * _catDescription;
    NSNumber * _identifier;
    NSString * _name;
    NSString * _uuidStr;
}

@property (nonatomic, retain) NSString *catDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (id)catDescription;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4;
- (id)name;
- (void)setCatDescription:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (id)uuidStr;

@end
