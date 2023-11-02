
@interface IDSFamilyMember : NSObject {
    NSNumber * _DSID;
    NSString * _appleID;
    NSArray * _devices;
    NSSet * _handles;
    long long  _relationship;
}

@property (nonatomic, readonly) NSNumber *DSID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSSet *handles;
@property (nonatomic, readonly) long long relationship;

- (void).cxx_destruct;
- (id)DSID;
- (id)appleID;
- (id)devices;
- (id)dictionaryRepresentation;
- (id)handles;
- (id)initWithDictionary:(id)arg1;
- (id)initWithiCloudID:(id)arg1 appleID:(id)arg2 handles:(id)arg3 devices:(id)arg4;
- (long long)relationship;

@end
