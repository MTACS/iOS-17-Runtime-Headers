
@interface HUQuickControlGroupContext : NSObject {
    NSSet * _alternateQuickControlContexts;
    HUQuickControlContext * _primaryQuickControlContext;
}

@property (nonatomic, copy) NSSet *alternateQuickControlContexts;
@property (nonatomic, copy) HUQuickControlContext *primaryQuickControlContext;

- (void).cxx_destruct;
- (id)allControlItems;
- (id)alternateQuickControlContexts;
- (id)initWithPrimaryQuickControlContext:(id)arg1 alternateQuickControlContexts:(id)arg2;
- (id)primaryQuickControlContext;
- (void)setAlternateQuickControlContexts:(id)arg1;
- (void)setPrimaryQuickControlContext:(id)arg1;

@end
