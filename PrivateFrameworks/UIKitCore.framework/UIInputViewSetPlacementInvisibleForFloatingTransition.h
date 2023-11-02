
@interface UIInputViewSetPlacementInvisibleForFloatingTransition : UIInputViewSetPlacementInvisible <NSSecureCoding> {
    bool  _isFloatingAssistantView;
}

+ (id)placementWithPlacement:(id)arg1;
+ (id)placementWithPlacement:(id)arg1 forFloatingAssistantViewTransition:(bool)arg2;

- (id)assistantView;
- (bool)isFloatingAssistantView;
- (bool)isHiddenForFloatingTransition;
- (bool)showsEditItems;

@end
