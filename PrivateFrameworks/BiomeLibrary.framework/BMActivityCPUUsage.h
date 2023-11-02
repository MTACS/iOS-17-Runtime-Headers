
@interface BMActivityCPUUsage : BMEventBase <BMStoreData> {
    bool  _hasPercentage;
    int  _percentage;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPercentage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int percentage;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasPercentage;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPercentage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)percentage;
- (id)serialize;
- (void)setHasPercentage:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
