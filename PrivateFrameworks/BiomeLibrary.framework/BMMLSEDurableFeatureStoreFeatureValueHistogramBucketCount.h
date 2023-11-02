
@interface BMMLSEDurableFeatureStoreFeatureValueHistogramBucketCount : BMEventBase <BMStoreData> {
    bool  _hasValue;
    int  _interval;
    unsigned int  _value;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int interval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int value;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasValue;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInterval:(int)arg1 value:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (int)interval;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasValue:(bool)arg1;
- (unsigned int)value;
- (void)writeTo:(id)arg1;

@end
