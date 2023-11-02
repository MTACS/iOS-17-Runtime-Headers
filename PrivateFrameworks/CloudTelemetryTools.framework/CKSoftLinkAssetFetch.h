
@interface CKSoftLinkAssetFetch : NSObject {
    CKContainer * _container;
}

@property (nonatomic, retain) CKContainer *container;

- (void).cxx_destruct;
- (id)container;
- (void)fetchAssetWithTeamID:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setContainer:(id)arg1;
- (void)setContainerPtr:(id)arg1;

@end
