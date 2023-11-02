
@interface _UISEGestureFeature : NSObject {
    <_UISEGestureFeatureDelegate> * _delegate;
    unsigned long long  _state;
}

@property (nonatomic) <_UISEGestureFeatureDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { }*)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)debugDictionary;
- (id)delegate;
- (void)incorporateSample:(const struct _UISEGestureFeatureSample { }*)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;

@end
