
@interface RWIProtocolNetworkWebSocketRequest : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolNetworkHeaders *headers;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)headers;
- (id)initWithHeaders:(id)arg1;
- (void)setHeaders:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithHeaders:(id)arg1;

@end
