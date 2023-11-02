
@protocol CRSUIDashboardWidgetWindowClient <NSObject>

@required

- (void)hostFocusableItem:(CRSDashboardFocusableItem *)arg1 focused:(bool)arg2;
- (void)hostFocusableItem:(CRSDashboardFocusableItem *)arg1 pressed:(bool)arg2;
- (void)hostSelectedFocusableItem:(CRSDashboardFocusableItem *)arg1;
- (void)hostSetUseSystemPrimaryFocusColor:(bool)arg1;
- (void)hostSetWidgetSizes:(NSArray *)arg1;

@end
