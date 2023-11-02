
@interface BMContextualUnderstandingPhysicalSocialPerson : BMEventBase <BMStoreData> {
    NSString * _cnContactID;
    NSString * _emailAddress;
    NSString * _name;
    NSString * _phoneNumber;
    NSString * _unknownPersonID;
}

@property (nonatomic, readonly) NSString *cnContactID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unknownPersonID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)cnContactID;
- (unsigned int)dataVersion;
- (id)description;
- (id)emailAddress;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 cnContactID:(id)arg4 unknownPersonID:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (id)phoneNumber;
- (id)serialize;
- (id)unknownPersonID;
- (void)writeTo:(id)arg1;

@end
