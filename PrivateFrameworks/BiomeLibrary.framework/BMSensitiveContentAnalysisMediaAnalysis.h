
@interface BMSensitiveContentAnalysisMediaAnalysis : BMEventBase <BMStoreData> {
    int  _ageGroup;
    NSString * _clientBundleID;
    int  _contentType;
    int  _isSensitive;
    NSString * _trackingVersion;
}

@property (nonatomic, readonly) int ageGroup;
@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) int contentType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int isSensitive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trackingVersion;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)ageGroup;
- (id)clientBundleID;
- (int)contentType;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithContentType:(int)arg1 ageGroup:(int)arg2 isSensitive:(int)arg3 clientBundleID:(id)arg4 trackingVersion:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (int)isSensitive;
- (id)jsonDictionary;
- (id)serialize;
- (id)trackingVersion;
- (void)writeTo:(id)arg1;

@end
