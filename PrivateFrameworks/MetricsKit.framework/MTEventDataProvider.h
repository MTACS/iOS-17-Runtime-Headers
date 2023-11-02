
@interface MTEventDataProvider : MTObject {
    NSArray * _additionalData;
    <MTEventDataProviderDelegate> * _delegate;
    NSDictionary * _knownFieldMethods;
}

@property (retain) NSArray *additionalData;
@property (nonatomic) <MTEventDataProviderDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *knownFieldMethods;

- (void).cxx_destruct;
- (void)addFields:(id)arg1;
- (void)addFieldsWithBlock:(id /* block */)arg1;
- (void)addFieldsWithDictionary:(id)arg1;
- (void)addFieldsWithPromise:(id)arg1;
- (id)additionalData;
- (id)delegate;
- (id)flattenAdditionalData;
- (SEL)knownFieldAccessorForFieldName:(id)arg1;
- (id)knownFieldMethods;
- (id)knownFieldMethodsForKnownFields:(id)arg1;
- (id)knownFields;
- (id)processMetricsData:(id)arg1 performanceData:(id)arg2;
- (void)setAdditionalData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKnownFieldMethods:(id)arg1;

@end
