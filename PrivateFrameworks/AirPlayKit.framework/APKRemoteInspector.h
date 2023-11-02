
@interface APKRemoteInspector : NSObject {
    APKRemoteInspectorCSSAgent * _CSSAgent;
    APKRemoteInspectorDOMAgent * _DOMAgent;
    JSContext * _context;
    APKRemoteInspectorNetworkAgent * _networkAgent;
    APKRemoteInspectorPageAgent * _pageAgent;
}

@property (nonatomic, readonly) APKRemoteInspectorCSSAgent *CSSAgent;
@property (nonatomic, readonly) APKRemoteInspectorDOMAgent *DOMAgent;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) JSContext *context;
@property (nonatomic, readonly) APKRemoteInspectorNetworkAgent *networkAgent;
@property (nonatomic, readonly) APKRemoteInspectorPageAgent *pageAgent;

+ (id)computedStyleWithName:(id)arg1 value:(id)arg2;
+ (id)nodeWithIdentifier:(int)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4;
+ (id)resourceWithURL:(id)arg1 type:(long long)arg2 MIMEType:(id)arg3;
+ (id)styleWithProperties:(id)arg1;

- (void).cxx_destruct;
- (id)CSSAgent;
- (id)DOMAgent;
- (id)context;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (bool)isConnected;
- (id)networkAgent;
- (id)pageAgent;

@end
