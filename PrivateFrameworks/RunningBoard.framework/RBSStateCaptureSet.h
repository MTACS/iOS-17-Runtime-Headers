
@interface RBSStateCaptureSet : NSObject {
    <RBSInvalidatable> * _invalidatable;
    NSMutableSet * _stateCaptureSegments;
}

@property (nonatomic, readonly, copy) NSSet *itemsCopy;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)init;
- (id)itemsCopy;
- (void)removeItem:(id)arg1;

@end
