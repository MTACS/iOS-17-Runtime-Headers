
@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec {
    NSArray * _allowedValues;
}

@property (nonatomic, readonly) NSArray *allowedValues;

- (void).cxx_destruct;
- (id)allowedValues;
- (id)initWithName:(id)arg1 allowedValues:(id)arg2;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
