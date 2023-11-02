
@interface BMDiscoverabilitySignals : BMEventBase <BMStoreData> {
    NSString * _contentIdentifier;
    NSString * _context;
    NSString * _osBuild;
    NSData * _userInfo;
}

@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *osBuild;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *userInfo;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contentIdentifier;
- (id)context;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithContentIdentifier:(id)arg1 context:(id)arg2 osBuild:(id)arg3 userInfo:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)osBuild;
- (id)serialize;
- (id)userInfo;
- (void)writeTo:(id)arg1;

@end
