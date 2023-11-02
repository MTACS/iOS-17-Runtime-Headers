
@interface RWIProtocolDOMStyleable : RWIProtocolJSONObject

@property (nonatomic) int nodeId;
@property (nonatomic) long long pseudoId;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithNodeId:(int)arg1;
- (int)nodeId;
- (long long)pseudoId;
- (void)setNodeId:(int)arg1;
- (void)setPseudoId:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithNodeId:(int)arg1;

@end
