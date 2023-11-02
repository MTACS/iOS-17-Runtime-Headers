
@interface BMLighthouseTaskError : BMEventBase <BMStoreData> {
    NSString * _errorCode;
    bool  _hasVersion;
    NSString * _taskName;
    int  _version;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorCode;
@property (nonatomic) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int version;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)errorCode;
- (bool)hasVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithVersion:(id)arg1 taskName:(id)arg2 errorCode:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasVersion:(bool)arg1;
- (id)taskName;
- (int)version;
- (void)writeTo:(id)arg1;

@end
