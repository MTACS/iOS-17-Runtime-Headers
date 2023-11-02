
@interface PXLayoutPerformerCacheEntry : NSObject {
    <PXLayoutPerformer> * _performer;
    unsigned long long  _reentryCount;
}

@property (nonatomic, retain) <PXLayoutPerformer> *performer;
@property (nonatomic) unsigned long long reentryCount;

- (void).cxx_destruct;
- (id)performer;
- (unsigned long long)reentryCount;
- (void)setPerformer:(id)arg1;
- (void)setReentryCount:(unsigned long long)arg1;

@end
