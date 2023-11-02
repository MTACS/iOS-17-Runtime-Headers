
@interface REMLElement : NSObject <NSCopying, REAutomaticExportedInterface> {
    REFeatureMap * _featureMap;
    NSString * _identifier;
}

@property (nonatomic, readonly) REFeatureMap *featureMap;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)featureMap;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 featureMap:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
