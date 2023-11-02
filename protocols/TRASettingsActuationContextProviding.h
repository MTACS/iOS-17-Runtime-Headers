
@protocol TRASettingsActuationContextProviding <NSObject>

@required

- (bool)hasAnyActuationContext;
- (TRASettingsActuationContext *)orientationActuationContext;
- (TRASettingsActuationContext *)userInterfaceStyleActuationContext;

@end
