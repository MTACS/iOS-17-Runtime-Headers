
@interface PBUIDeferredImageSlot : PBUIImageSlot {
    UIColor * _fallbackColor;
    NSHashTable * _imageSlotObservers;
}

@property (nonatomic, retain) UIColor *fallbackColor;

- (void).cxx_destruct;
- (id)_deferredImageSlot;
- (void)addImageSlotObserver:(id)arg1;
- (id)fallbackColor;
- (id)initWithLifetimeToken:(id)arg1;
- (void)removeImageSlotObserver:(id)arg1;
- (void)setFallbackColor:(id)arg1;
- (void)updateWithImage:(id)arg1;

@end
