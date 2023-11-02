
@interface BMContextualUnderstandingActivityInference : BMEventBase <BMStoreData> {
    NSArray * _inferredActivities;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inferredActivities;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_inferredActivitiesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)inferredActivities;
- (id)initByReadFrom:(id)arg1;
- (id)initWithInferredActivities:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
