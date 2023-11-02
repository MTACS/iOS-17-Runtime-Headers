
@interface BMLifeEventActivityPerson : BMEventBase <BMStoreData> {
    NSString * _contactId;
    NSString * _email;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *contactId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *email;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contactId;
- (unsigned int)dataVersion;
- (id)description;
- (id)email;
- (id)initByReadFrom:(id)arg1;
- (id)initWithContactId:(id)arg1 name:(id)arg2 email:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
