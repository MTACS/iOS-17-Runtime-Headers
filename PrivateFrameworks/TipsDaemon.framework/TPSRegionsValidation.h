
@interface TPSRegionsValidation : TPSInclusivityValidation

@property (nonatomic, readonly) NSArray *excludeRegions;
@property (nonatomic, readonly) NSArray *targetRegions;

- (id)excludeRegions;
- (id)initWithTargetRegions:(id)arg1 excludeRegions:(id)arg2;
- (id)targetRegions;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
