
@interface PRPosterLabel : UILabel <PRPosterAppearanceObserving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)posterAppearanceDidChange:(id)arg1;

@end
