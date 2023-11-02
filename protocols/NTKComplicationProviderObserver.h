
@protocol NTKComplicationProviderObserver <NSObject>

@optional

- (void)complicationProviderComplicationsDidChange:(NTKComplicationProvider *)arg1;
- (void)complicationProviderUpdatedDisabledComplicationTypes:(NTKComplicationProvider *)arg1;

@end
