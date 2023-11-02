
@interface UIKitFocusableViewResponderItemBase : NSObject

@property (nonatomic, readonly) NSString *swiftui_focusGroupIdentifier;

- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)focusGroupIdentifier;
- (id)swiftui_focusGroupIdentifier;
- (id)swiftui_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)swiftui_searchForFocusRegionsInContext:(id)arg1;

@end
