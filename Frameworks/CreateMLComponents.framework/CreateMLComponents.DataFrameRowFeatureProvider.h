
@interface CreateMLComponents.DataFrameRowFeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void featureColumns;
    void indexByName;
    void rowIndex;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
