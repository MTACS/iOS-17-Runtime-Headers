
@interface PRChildPosterAttribute : NSObject <PRPosterRoleAttribute> {
    NSUUID * _childPosterUUID;
    NSDate * _dateCreated;
    NSString * _providerIdentifier;
}

@property (nonatomic, readonly) NSString *attributeType;
@property (nonatomic, readonly, copy) NSUUID *childPosterUUID;
@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;

+ (id)decodeObjectWithJSON:(id)arg1;

- (void).cxx_destruct;
- (id)attributeType;
- (id)childPosterUUID;
- (id)dateCreated;
- (id)encodeJSON;
- (id)initWithChildPosterUUID:(id)arg1 dateCreated:(id)arg2 providerIdentifier:(id)arg3;
- (id)providerIdentifier;

@end
