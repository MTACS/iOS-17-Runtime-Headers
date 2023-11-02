
@interface AXRemoteElement : NSObject {
    id  _accessibilityContainer;
    NSMutableSet * _allChildren;
    unsigned int  _contextId;
    id /* block */  _contextRetrieval;
    bool  _deniesDirectAppConnection;
    unsigned int  _machPort;
    bool  _onClientSide;
    id /* block */  _pidRetrieval;
    <AXRemoteElementChildrenDelegate> * _remoteChildrenDelegate;
    int  _remotePid;
    NSString * _uuid;
}

@property (nonatomic) id accessibilityContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerAccessibilityFrame;
@property (nonatomic) unsigned int contextId;
@property (nonatomic, copy) id /* block */ contextRetrieval;
@property (nonatomic) bool deniesDirectAppConnection;
@property (nonatomic, readonly) unsigned int localHostingWindowContextId;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) bool onClientSide;
@property (nonatomic, copy) id /* block */ pidRetrieval;
@property (nonatomic) <AXRemoteElementChildrenDelegate> *remoteChildrenDelegate;
@property (nonatomic) int remotePid;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long uuidHash;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

+ (bool)_isSerializableAccessibilityElement;
+ (void)initialize;
+ (bool)registerRemoteElement:(id)arg1 remotePort:(unsigned int)arg2;
+ (id)registeredRemoteElements;
+ (id)remoteElementForBlock:(id /* block */)arg1;
+ (id)remoteElementsForBlock:(id /* block */)arg1;
+ (id)remoteElementsForContextId:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_accessibilityActiveKeyboard;
- (unsigned long long)_accessibilityAutomationType;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityFirstElement;
- (id)_accessibilityHandwritingElement;
- (bool)_accessibilityHasVisibleFrame;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (bool)_accessibilityIsGroupedParent;
- (id)_accessibilityLastElement;
- (id)_accessibilityResponderElement;
- (void)_accessibilitySetFocusOnElement:(bool)arg1;
- (bool)_accessibilitySetNativeFocus;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_getRemoteValuesOffMainThread:(id /* block */)arg1;
- (id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(bool)arg2;
- (id)accessibilityContainer;
- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerAccessibilityFrame;
- (unsigned int)contextId;
- (id /* block */)contextRetrieval;
- (void)dealloc;
- (bool)deniesDirectAppConnection;
- (id)description;
- (void)getLeafElementsFromRemoteSide:(id /* block */)arg1;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (unsigned int)localHostingWindowContextId;
- (unsigned int)machPort;
- (bool)onClientSide;
- (id /* block */)pidRetrieval;
- (void)platformCleanup;
- (id)remoteChildrenDelegate;
- (int)remotePid;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setContextRetrieval:(id /* block */)arg1;
- (void)setDeniesDirectAppConnection:(bool)arg1;
- (void)setMachPort:(unsigned int)arg1;
- (void)setOnClientSide:(bool)arg1;
- (void)setPidRetrieval:(id /* block */)arg1;
- (void)setRemoteChildrenDelegate:(id)arg1;
- (void)setRemotePid:(int)arg1;
- (void)setUuid:(id)arg1;
- (void)unregister;
- (id)uuid;
- (unsigned long long)uuidHash;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (id)_accessibilityNextElementsForSpeakThis;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (bool)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)_accessibilityIsRemoteElement;
- (id)_ancestorElementThatSupportsActivationAction;
- (id)_handleElementTraversalRequestMovingForward:(bool)arg1 count:(unsigned long long)arg2 shouldIncludeSelf:(bool)arg3 wantsContainers:(bool)arg4;
- (id)_iosAccessibilityAttributeValue:(long long)arg1;
- (id)_iosAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (bool)accessibilityActivate;
- (bool)accessibilityViewIsModal;
- (void)platformCleanup;

@end
