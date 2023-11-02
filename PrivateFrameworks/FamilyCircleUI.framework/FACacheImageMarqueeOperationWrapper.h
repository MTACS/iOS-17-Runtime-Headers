
@interface FACacheImageMarqueeOperationWrapper : NSObject {
    FACacheImageMarqueeOperation * _cacheImageOperation;
}

@property (nonatomic, retain) FACacheImageMarqueeOperation *cacheImageOperation;

- (void).cxx_destruct;
- (id)cacheImageOperation;
- (void)createAndCacheData;
- (void)generateMarqueeWith:(unsigned long long)arg1;
- (id)initWithFamilyCircle:(id)arg1;
- (void)setCacheImageOperation:(id)arg1;

@end
