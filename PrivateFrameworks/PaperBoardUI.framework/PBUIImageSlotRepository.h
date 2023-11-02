
@interface PBUIImageSlotRepository : NSObject {
    NSMutableSet * _lifetimes;
    NSMutableDictionary * _slots;
}

- (void).cxx_destruct;
- (long long)actualStyleForIdentifier:(id)arg1;
- (void)allocateImageSlotForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 actualStyle:(long long)arg3 url:(id)arg4 lifetimeObject:(id)arg5;
- (void)freeImageSlotWithIdentifier:(id)arg1 lifetime:(id)arg2;
- (bool)hasSlotForIdentifier:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (id)ioSurfaceForIdentifier:(id)arg1;
- (void)setImageSlot:(id)arg1 forIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForIdentifier:(id)arg1;
- (id)urlForIdentifier:(id)arg1;

@end
