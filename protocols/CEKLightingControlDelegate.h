
@protocol CEKLightingControlDelegate <NSObject>

@required

- (void)lightingControlDidChangeSelectedLightingType:(CEKLightingControl *)arg1;

@optional

- (void)lightingControl:(CEKLightingControl *)arg1 willChangeExpanded:(bool)arg2;
- (void)lightingControlDidChangeExpanded:(CEKLightingControl *)arg1;

@end
