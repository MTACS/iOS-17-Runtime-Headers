
@interface RBSStateCaptureSetSegment : NSObject {
    <RBSInvalidatable> * _invalidatable;
    NSMutableSet * _items;
}

@property (nonatomic, readonly) NSSet *items;

- (void).cxx_destruct;
- (id)_stateCapture;
- (void)addItem:(id)arg1 withLength:(unsigned long long)arg2;
- (bool)containsItem:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)items;
- (void)removeItem:(id)arg1;

@end
