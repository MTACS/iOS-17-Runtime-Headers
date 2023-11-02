
@interface BMUserFocusActivity : BMEventBase <BMStoreData> {
    NSString * _clientID;
    bool  _hasStarting;
    NSString * _mode;
    bool  _starting;
}

@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mode;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)clientID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 mode:(id)arg2 clientID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)mode;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (void)writeTo:(id)arg1;

@end
