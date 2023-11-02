
@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator> {
    id /* block */  _criteriaBlock;
}

@property (nonatomic, copy) id /* block */ criteriaBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)criteriaBlock;
- (id)initWithCriteriaBlock:(id /* block */)arg1;
- (void)setCriteriaBlock:(id /* block */)arg1;
- (bool)shouldOverrideURLRequest:(id)arg1;

@end
