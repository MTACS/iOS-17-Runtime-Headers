
@interface SBIconViewSnapshotProvider : NSObject <SBIconViewSnapshotProviding> {
    id /* block */  _invalidationBlock;
    UIView * _snapshotView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *snapshotView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSnapshotView:(id)arg1 invalidation:(id /* block */)arg2;
- (void)invalidate;
- (id)snapshotView;

@end
