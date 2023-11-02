
@protocol SBSystemApertureElementVisibilityObserving <NSObject>

@optional

- (void)element:(id <SAElement>)arg1 visibilityDidChange:(bool)arg2;
- (void)element:(id <SAElement>)arg1 visibilityWillChange:(bool)arg2;

@end
