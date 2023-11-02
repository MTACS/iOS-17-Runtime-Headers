
@interface CPLFaceCropChange : CPLRecordChange {
    long long  _faceCropType;
    NSString * _personIdentifier;
    NSString * _rejectedPersonIdentifier;
    NSData * _resourceData;
}

@property (nonatomic) long long faceCropType;
@property (nonatomic, copy) NSString *personIdentifier;
@property (nonatomic, copy) NSString *rejectedPersonIdentifier;
@property (nonatomic, copy) NSData *resourceData;

+ (Class)relatedRecordClass;
+ (bool)supportsDeletion;
+ (bool)supportsDirectDeletion;

- (void).cxx_destruct;
- (long long)faceCropType;
- (id)personIdentifier;
- (id)personScopedIdentifier;
- (id)propertiesDescription;
- (id)rejectedPersonIdentifier;
- (id)relatedIdentifier;
- (id)resourceData;
- (void)setFaceCropType:(long long)arg1;
- (void)setPersonIdentifier:(id)arg1;
- (void)setPersonScopedIdentifier:(id)arg1;
- (void)setRejectedPersonIdentifier:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResourceData:(id)arg1;
- (bool)validateChangeWithError:(id*)arg1;
- (bool)validateFullRecord;

@end
