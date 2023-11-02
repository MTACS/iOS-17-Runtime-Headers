
@interface _REFeatureValuePair : NSObject {
    REFeature * _feature;
    unsigned long long  _index;
    NSArray * _rootFeatures;
    unsigned long long  _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NSArray *rootFeatures;
@property (nonatomic, readonly) unsigned long long value;

- (void).cxx_destruct;
- (void)dealloc;
- (id)feature;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2 index:(unsigned long long)arg3 rootFeatures:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)rootFeatures;
- (unsigned long long)value;

@end
