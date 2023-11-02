
@interface BMMLSELabeledDataStoreFeatureFeatureValueDoubleValuedVector : BMEventBase <BMStoreData> {
    NSArray * _vectorWithDoubles;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *vectorWithDoubles;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_vectorWithDoublesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithVectorWithDoubles:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)vectorWithDoubles;
- (void)writeTo:(id)arg1;

@end
