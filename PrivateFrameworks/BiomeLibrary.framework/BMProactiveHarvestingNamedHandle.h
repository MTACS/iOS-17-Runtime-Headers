
@interface BMProactiveHarvestingNamedHandle : BMEventBase <BMStoreData> {
    NSString * _contactIdentifier;
    NSString * _handle;
    NSString * _handleType;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *handleType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (unsigned int)dataVersion;
- (id)description;
- (id)handle;
- (id)handleType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 handle:(id)arg2 contactIdentifier:(id)arg3 handleType:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
