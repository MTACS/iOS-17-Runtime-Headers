
@interface EDAMSharedNote : FATObject {
    NSNumber * _privilege;
    EDAMIdentity * _recipientIdentity;
    NSNumber * _serviceAssigned;
    NSNumber * _serviceCreated;
    NSNumber * _serviceUpdated;
    NSNumber * _sharerUserID;
}

@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) EDAMIdentity *recipientIdentity;
@property (nonatomic, retain) NSNumber *serviceAssigned;
@property (nonatomic, retain) NSNumber *serviceCreated;
@property (nonatomic, retain) NSNumber *serviceUpdated;
@property (nonatomic, retain) NSNumber *sharerUserID;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)privilege;
- (id)recipientIdentity;
- (id)serviceAssigned;
- (id)serviceCreated;
- (id)serviceUpdated;
- (void)setPrivilege:(id)arg1;
- (void)setRecipientIdentity:(id)arg1;
- (void)setServiceAssigned:(id)arg1;
- (void)setServiceCreated:(id)arg1;
- (void)setServiceUpdated:(id)arg1;
- (void)setSharerUserID:(id)arg1;
- (id)sharerUserID;

@end
