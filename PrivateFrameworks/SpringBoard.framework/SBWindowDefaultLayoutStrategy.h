
@interface SBWindowDefaultLayoutStrategy : NSObject <SBWindowLayoutStrategy> {
    bool  _clip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_strategyWithClipping:(bool)arg1;
+ (id)clipStrategy;
+ (id)noClipStrategy;

- (id)_init;
- (void)addObserver:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithInterfaceOrientation:(long long)arg1 windowScene:(id)arg2;
- (void)removeObserver:(id)arg1;
- (bool)shouldClipForWindow:(id)arg1;

@end
