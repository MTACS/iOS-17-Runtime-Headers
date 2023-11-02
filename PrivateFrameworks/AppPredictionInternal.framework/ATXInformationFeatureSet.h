
@interface ATXInformationFeatureSet : NSObject <NSCopying> {
    NSDictionary * _features;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithFeatureDictionary:(id)arg1;
- (double)valueForFeature:(unsigned long long)arg1;

@end
