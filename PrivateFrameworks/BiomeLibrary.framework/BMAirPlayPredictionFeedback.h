
@interface BMAirPlayPredictionFeedback : BMEventBase <BMStoreData> {
    NSString * _outputDeviceID;
    NSString * _subtype;
    int  _type;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *outputDeviceID;
@property (nonatomic, readonly) NSString *subtype;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithType:(int)arg1 outputDeviceID:(id)arg2 subtype:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)outputDeviceID;
- (id)serialize;
- (id)subtype;
- (int)type;
- (void)writeTo:(id)arg1;

@end
