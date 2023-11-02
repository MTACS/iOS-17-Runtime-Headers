
@interface BMMicroLocationTruthTag : BMEventBase <BMStoreData> {
    NSString * _clientBundleID;
    bool  _hasRaw_absoluteTimestamp;
    double  _raw_absoluteTimestamp;
    NSString * _recordingRequestID;
    NSString * _truthTagID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *recordingRequestID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *truthTagID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)clientBundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 truthTagID:(id)arg2 recordingRequestID:(id)arg3 clientBundleID:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)recordingRequestID;
- (id)serialize;
- (id)truthTagID;
- (void)writeTo:(id)arg1;

@end
