
@interface REFeatureValuePair : NSObject <NSCopying> {
    REFeature * _feature;
    unsigned long long  _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)value;

@end
