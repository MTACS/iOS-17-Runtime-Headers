
@interface SSVComplexOperation : SSVOperation {
    SSVFairPlaySAPSession * _sapSession;
    SSURLBag * _urlBag;
    NSDictionary * _urlBagDictionary;
}

@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (readonly, copy) NSDictionary *URLBagDictionary;

- (void).cxx_destruct;
- (id)SAPSession;
- (id)URLBagDictionary;
- (void)configureWithURLBag:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (id)newLoadURLOperationWithRequest:(id)arg1;
- (void)setSAPSession:(id)arg1;

@end
