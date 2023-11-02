
@interface CLSClassMember : CLSObject <CLSRelationable> {
    bool  _markedForDeletion;
    NSString * _personID;
    unsigned long long  _roles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool markedForDeletion;
@property (nonatomic, copy) NSString *personID;
@property (nonatomic) unsigned long long roles;
@property (readonly) Class superclass;

+ (id)objectIDForClassID:(id)arg1 andPersonID:(id)arg2;
+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassID:(id)arg1 personID:(id)arg2 roles:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)markedForDeletion;
- (id)personID;
- (unsigned long long)roles;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setPersonID:(id)arg1;
- (void)setRoles:(unsigned long long)arg1;

@end
