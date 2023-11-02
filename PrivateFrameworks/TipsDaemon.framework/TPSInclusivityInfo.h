
@interface TPSInclusivityInfo : NSObject {
    NSArray * _excludeValues;
    NSArray * _targetValues;
}

@property (nonatomic, copy) NSArray *excludeValues;
@property (nonatomic, copy) NSArray *targetValues;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)excludeValues;
- (id)initWithTargetValues:(id)arg1 excludeValues:(id)arg2;
- (void)setExcludeValues:(id)arg1;
- (void)setTargetValues:(id)arg1;
- (id)targetValues;

@end
