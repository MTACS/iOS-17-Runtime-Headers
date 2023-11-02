
@interface CLSHandoutRecipient : CLSObject <CLSRelationable> {
    NSString * _classID;
    NSString * _personID;
}

@property (nonatomic, copy) NSString *classID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *parentObjectID;
@property (nonatomic, copy) NSString *personID;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)classID;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassID:(id)arg1 personID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)personID;
- (void)setClassID:(id)arg1;
- (void)setPersonID:(id)arg1;
- (bool)validateObject:(id*)arg1;

@end
