
@interface UIAccessibilityBridgeElement : UIAccessibilityElement {
    NSArray * _accessibilityActionsForRemoteDevice;
    <UIAccessibilityBridgeAXActionHandler> * _axActionHandler;
    NSData * _elementRefData;
    bool  _isAXScrollAncestor;
}

@property (nonatomic, retain) NSArray *accessibilityActionsForRemoteDevice;
@property (nonatomic) <UIAccessibilityBridgeAXActionHandler> *axActionHandler;
@property (nonatomic, retain) NSData *elementRefData;
@property (nonatomic) bool isAXScrollAncestor;

- (void).cxx_destruct;
- (bool)_accessibilityIsScrollAncestor;
- (id)accessibilityActionsForRemoteDevice;
- (id)axActionHandler;
- (id)elementRefData;
- (bool)isAXScrollAncestor;
- (void)overrideAccessibilityMethodsForRemoteDevice;
- (void)setAccessibilityActionsForRemoteDevice:(id)arg1;
- (void)setAxActionHandler:(id)arg1;
- (void)setElementRefData:(id)arg1;
- (void)setIsAXScrollAncestor:(bool)arg1;

@end
