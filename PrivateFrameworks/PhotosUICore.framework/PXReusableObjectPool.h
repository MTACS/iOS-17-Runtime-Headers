
@interface PXReusableObjectPool : NSObject {
    <PXReusableObjectPoolDelegate> * _delegate;
    struct { 
        bool respondsToDidCreateReusableObject; 
        bool respondsToObjectBecameReusable; 
        bool respondsToObjectPreparedForReuse; 
    }  _delegateFlags;
    NSMutableDictionary * _maximumPoolSizeByReuseIdentifier;
    NSMutableDictionary * _objectCreationBlocksByReuseIdentifier;
    NSMutableDictionary * _reusableObjectsByReuseIdentifier;
}

@property (nonatomic) <PXReusableObjectPoolDelegate> *delegate;
@property (nonatomic, readonly) NSMutableDictionary *maximumPoolSizeByReuseIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *objectCreationBlocksByReuseIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *reusableObjectsByReuseIdentifier;

- (void).cxx_destruct;
- (void)checkInReusableObject:(id)arg1;
- (id)checkOutReusableObjectWithReuseIdentifier:(long long)arg1;
- (id)delegate;
- (id)init;
- (id)maximumPoolSizeByReuseIdentifier;
- (id)objectCreationBlocksByReuseIdentifier;
- (void)registerReusableObjectForReuseIdentifier:(long long)arg1 creationHandler:(id /* block */)arg2;
- (void)registerReusableObjectForReuseIdentifier:(long long)arg1 maximumPoolSize:(long long)arg2 creationHandler:(id /* block */)arg3;
- (void)removeAllReusableObjectsWithReuseIdentifier:(long long)arg1;
- (id)reusableObjectsByReuseIdentifier;
- (void)setDelegate:(id)arg1;

@end
