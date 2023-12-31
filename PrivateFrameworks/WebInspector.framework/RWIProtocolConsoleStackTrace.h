
@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *callFrames;
@property (nonatomic, retain) RWIProtocolConsoleStackTrace *parentStackTrace;
@property (nonatomic) bool topCallFrameIsBoundary;
@property (nonatomic) bool truncated;

- (id)callFrames;
- (id)initWithCallFrames:(id)arg1;
- (id)parentStackTrace;
- (void)setCallFrames:(id)arg1;
- (void)setParentStackTrace:(id)arg1;
- (void)setTopCallFrameIsBoundary:(bool)arg1;
- (void)setTruncated:(bool)arg1;
- (bool)topCallFrameIsBoundary;
- (bool)truncated;

@end
