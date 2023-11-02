
@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface> {
    unsigned long long  _hash;
    bool  _historic;
    RETaggedFeatureValueArray * _values;
}

@property (getter=isHistoric, nonatomic, readonly) bool historic;
@property (nonatomic, readonly) RETaggedFeatureValueArray *values;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValues:(id)arg1 isHistoric:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isHistoric;
- (id)values;

@end
