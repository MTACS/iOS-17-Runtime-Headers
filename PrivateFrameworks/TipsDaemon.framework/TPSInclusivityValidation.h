
@interface TPSInclusivityValidation : TPSTargetingValidation {
    NSArray * _excludeValues;
    NSArray * _targetValues;
}

@property (nonatomic, copy) NSArray *excludeValues;
@property (nonatomic, copy) NSArray *targetValues;

- (void).cxx_destruct;
- (id)description;
- (id)excludeValues;
- (id)initWithTargetValues:(id)arg1 excludeValues:(id)arg2;
- (void)setExcludeValues:(id)arg1;
- (void)setTargetValues:(id)arg1;
- (id)targetValues;

@end
