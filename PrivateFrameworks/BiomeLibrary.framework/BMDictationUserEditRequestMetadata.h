
@interface BMDictationUserEditRequestMetadata : BMEventBase <BMStoreData> {
    bool  _hasSampling_rate;
    NSString * _language;
    unsigned int  _sampling_rate;
    NSString * _task;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSampling_rate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) unsigned int sampling_rate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *task;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasSampling_rate;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTask:(id)arg1 language:(id)arg2 sampling_rate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)language;
- (unsigned int)sampling_rate;
- (id)serialize;
- (void)setHasSampling_rate:(bool)arg1;
- (id)task;
- (void)writeTo:(id)arg1;

@end
