
@interface AXPTranslator : NSObject {
    bool  _accessibilityEnabled;
    <AXPTranslationDelegateHelper> * _bridgeDelegate;
    <AXPTranslationTokenDelegateHelper> * _bridgeTokenDelegate;
    NSMutableDictionary * _fakeElementCache;
    <AXPTranslationRuntimeHelper> * _runtimeDelegate;
    bool  _supportsDelegateTokens;
    <AXPTranslationSystemAppDelegate> * _systemAppDelegate;
}

@property (nonatomic) bool accessibilityEnabled;
@property (nonatomic) <AXPTranslationDelegateHelper> *bridgeDelegate;
@property (nonatomic) <AXPTranslationTokenDelegateHelper> *bridgeTokenDelegate;
@property (nonatomic, retain) NSMutableDictionary *fakeElementCache;
@property (nonatomic) <AXPTranslationRuntimeHelper> *runtimeDelegate;
@property (nonatomic) bool supportsDelegateTokens;
@property (nonatomic) <AXPTranslationSystemAppDelegate> *systemAppDelegate;

+ (id)sharedInstance;
+ (id)sharediOSInstance;

- (void).cxx_destruct;
- (void)_resetBridgeTokensForResponse:(id)arg1 bridgeDelegateToken:(id)arg2;
- (id)_translationApplicationObjectForPidNumber:(id)arg1;
- (bool)accessibilityEnabled;
- (id /* block */)attributedStringConversionBlock;
- (id)bridgeDelegate;
- (id)bridgeTokenDelegate;
- (void)enableAccessibility;
- (id)fakeElementCache;
- (id)frontmostApplicationWithDisplayId:(unsigned int)arg1 bridgeDelegateToken:(id)arg2;
- (void)handleNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (id)init;
- (void)initializeAXRuntimeForSystemAppServer;
- (id)iosPlatformElementFromTranslation:(id)arg1;
- (id)objectAtPoint:(struct CGPoint { double x1; double x2; })arg1 displayId:(unsigned int)arg2 bridgeDelegateToken:(id)arg3;
- (id)platformElementFromTranslation:(id)arg1;
- (id)platformTranslator;
- (id)processActionRequest:(id)arg1;
- (id)processAttributeRequest:(id)arg1;
- (id)processCanSetAttribute:(id)arg1;
- (id)processFrontMostApp:(id)arg1;
- (id)processHitTest:(id)arg1;
- (id)processMultipleAttributeRequest:(id)arg1;
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2;
- (id)processSetAttribute:(id)arg1;
- (id)processSupportedActions:(id)arg1;
- (id)processSupportsAttributes:(id)arg1;
- (id)processTranslatorRequest:(id)arg1;
- (id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2;
- (id)runtimeDelegate;
- (id)sendTranslatorRequest:(id)arg1;
- (void)setAccessibilityEnabled:(bool)arg1;
- (void)setBridgeDelegate:(id)arg1;
- (void)setBridgeTokenDelegate:(id)arg1;
- (void)setFakeElementCache:(id)arg1;
- (void)setRuntimeDelegate:(id)arg1;
- (void)setSupportsDelegateTokens:(bool)arg1;
- (void)setSystemAppDelegate:(id)arg1;
- (bool)supportsDelegateTokens;
- (id)systemAppDelegate;
- (id)translationApplicationObject;
- (id)translationApplicationObjectForPid:(int)arg1;
- (id)translationObjectFromData:(id)arg1;

@end
