
@interface KGElementFilter : NSObject {
    bool  _includeTombstones;
    NSArray * _optionalLabels;
    NSDictionary * _properties;
    NSArray * _requiredLabels;
}

@property (nonatomic) bool includeTombstones;
@property (nonatomic, readonly) bool noLabelsOrProperties;
@property (nonatomic, readonly) NSArray *optionalLabels;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSArray *requiredLabels;

+ (id)any;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)includeTombstones;
- (id)initWithRequiredLabels:(id)arg1 optionalLabels:(id)arg2 properties:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)matchesElement:(id)arg1;
- (bool)matchesLabels:(id)arg1;
- (bool)matchesProperties:(id)arg1;
- (bool)noLabelsOrProperties;
- (id)optionalLabels;
- (id)properties;
- (id)requiredLabels;
- (void)setIncludeTombstones:(bool)arg1;

@end
