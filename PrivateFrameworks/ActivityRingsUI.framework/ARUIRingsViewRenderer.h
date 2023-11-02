
@interface ARUIRingsViewRenderer : ARUIRenderer {
    unsigned long long  _maximumRingCount;
}

@property (nonatomic, readonly) unsigned long long maximumRingCount;

+ (id)rendererForRingGroupController:(id)arg1;
+ (id)rendererForRingGroupControllers:(id)arg1;

- (id)initWithMaximumRingCount:(unsigned long long)arg1;
- (id)initWithMaximumRingCount:(unsigned long long)arg1 commandQueue:(id)arg2;
- (unsigned long long)maximumRingCount;

@end
