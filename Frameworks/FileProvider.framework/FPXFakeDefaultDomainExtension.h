
@interface FPXFakeDefaultDomainExtension : NSObject <NSFileProviderReplicatedExtension> {
    NSFileProviderDomain * _domain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileProviderDomain *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 request:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)deleteItemWithIdentifier:(id)arg1 baseVersion:(id)arg2 options:(unsigned long long)arg3 request:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)domain;
- (id)enumeratorForContainerItemIdentifier:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithDomain:(id)arg1;
- (void)invalidate;
- (id)itemForIdentifier:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)modifyItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 request:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)setDomain:(id)arg1;

@end
