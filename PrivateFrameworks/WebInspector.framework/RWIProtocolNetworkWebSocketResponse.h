
@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolNetworkHeaders *headers;
@property (nonatomic) int status;
@property (nonatomic, copy) NSString *statusText;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)headers;
- (id)initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3;
- (void)setHeaders:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusText:(id)arg1;
- (int)status;
- (id)statusText;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithStatus:(int)arg1 statusText:(id)arg2 headers:(id)arg3;

@end
