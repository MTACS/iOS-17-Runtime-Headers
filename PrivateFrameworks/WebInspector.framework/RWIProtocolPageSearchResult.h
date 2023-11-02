
@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *frameId;
@property (nonatomic) double matchesCount;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *url;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)frameId;
- (id)initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3;
- (double)matchesCount;
- (id)requestId;
- (void)setFrameId:(id)arg1;
- (void)setMatchesCount:(double)arg1;
- (void)setRequestId:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3;

@end
