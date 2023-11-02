
@interface BMLighthouseLedgerLighthousePluginEventEventStatus : BMEventBase <BMStoreData> {
    int  _errorCode;
    NSString * _errorDomain;
    bool  _hasErrorCode;
    bool  _hasSucceeded;
    bool  _succeeded;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int errorCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasSucceeded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool succeeded;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasSucceeded;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSucceeded:(id)arg1 errorDomain:(id)arg2 errorCode:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasSucceeded:(bool)arg1;
- (bool)succeeded;
- (void)writeTo:(id)arg1;

@end
