
@interface STStatusDomain : NSObject <STStatusDomainClientHandle> {
    id /* block */  _dataChangedBlock;
    id /* block */  _dataChangedWithContextBlock;
    bool  _invalidated;
    <STStatusDomainServerHandle> * _serverHandle;
}

@property (nonatomic, readonly, copy) <STStatusDomainData> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, copy) NSArray *preferredLocalizations;
@property (nonatomic, readonly) <STStatusDomainServerHandle> *serverHandle;
@property (readonly) Class superclass;

+ (unsigned long long)statusDomainName;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithServerHandle:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (void)observeData:(id /* block */)arg1;
- (void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id)arg3;
- (void)observeDataWithBlock:(id /* block */)arg1;
- (id)preferredLocalizations;
- (id)serverHandle;

@end
