
@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject

@property (nonatomic) int column;
@property (nonatomic) long long level;
@property (nonatomic) int line;
@property (nonatomic, copy) NSString *networkRequestId;
@property (nonatomic, copy) NSArray *parameters;
@property (nonatomic) int repeatCount;
@property (nonatomic) long long source;
@property (nonatomic, retain) RWIProtocolConsoleStackTrace *stackTrace;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *url;

- (int)column;
- (id)initWithSource:(long long)arg1 level:(long long)arg2 text:(id)arg3;
- (long long)level;
- (int)line;
- (id)networkRequestId;
- (id)parameters;
- (int)repeatCount;
- (void)setColumn:(int)arg1;
- (void)setLevel:(long long)arg1;
- (void)setLine:(int)arg1;
- (void)setNetworkRequestId:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRepeatCount:(int)arg1;
- (void)setSource:(long long)arg1;
- (void)setStackTrace:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)source;
- (id)stackTrace;
- (id)text;
- (double)timestamp;
- (long long)type;
- (id)url;

@end
