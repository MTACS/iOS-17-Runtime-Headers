
@interface PFStaticCloudKitContainerProvider : PFCloudKitContainerProvider {
    CKContainer * _container;
}

@property (nonatomic, readonly) CKContainer *container;

- (id)container;
- (id)containerWithIdentifier:(id)arg1;
- (id)containerWithIdentifier:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;

@end
