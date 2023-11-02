
@interface MTCoreMaterialVisualStylingProvider : NSObject {
    NSPointerArray * _observers;
    <MTVisualStyleSetProviding> * _visualStyleSet;
}

@property (getter=_observers, nonatomic, retain) NSPointerArray *observers;
@property (getter=_visualStyleSet, setter=_setVisualStyleSet:, nonatomic, retain) <MTVisualStyleSetProviding> *visualStyleSet;
@property (nonatomic, readonly, copy) NSString *visualStyleSetName;

+ (bool)canGenerateVisualStyleSetFromRecipe:(id)arg1;
+ (id)coreMaterialVisualStylingProviderForRecipe:(id)arg1 andCategory:(id)arg2;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;

- (void).cxx_destruct;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_observers;
- (void)_setVisualStyleSet:(id)arg1;
- (id)_visualStyleSet;
- (void)addObserver:(id)arg1;
- (id)description;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (bool)updateVisualStyleSetFromRecipe:(id)arg1 andCategory:(id)arg2;
- (bool)updateVisualStyleSetGeneratedFromRecipe:(id)arg1;
- (id)visualStyleSetName;
- (id)visualStylingForStyle:(id)arg1;

@end
