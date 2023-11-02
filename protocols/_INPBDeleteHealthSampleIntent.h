
@protocol _INPBDeleteHealthSampleIntent <NSObject>

@required

+ (Class)sampleUuidsType;

- (void)addSampleUuids:(_INPBString *)arg1;
- (void)clearSampleUuids;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)sampleUuids;
- (_INPBString *)sampleUuidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sampleUuidsCount;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSampleUuids:(NSArray *)arg1;

@end
