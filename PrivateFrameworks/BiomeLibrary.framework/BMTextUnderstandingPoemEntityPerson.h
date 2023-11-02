
@interface BMTextUnderstandingPoemEntityPerson : BMEventBase <BMStoreData> {
    NSString * _contactHandle;
    NSString * _mdIdentifier;
    NSString * _name;
    NSString * _visualIdentifier;
}

@property (nonatomic, readonly) NSString *contactHandle;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mdIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *visualIdentifier;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contactHandle;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 contactHandle:(id)arg2 visualIdentifier:(id)arg3 mdIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)mdIdentifier;
- (id)name;
- (id)serialize;
- (id)visualIdentifier;
- (void)writeTo:(id)arg1;

@end
