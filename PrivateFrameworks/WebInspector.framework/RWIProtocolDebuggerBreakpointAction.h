
@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *data;
@property (nonatomic) bool emulateUserGesture;
@property (nonatomic) int identifier;
@property (nonatomic) long long type;

- (id)data;
- (bool)emulateUserGesture;
- (int)identifier;
- (id)initWithType:(long long)arg1;
- (void)setData:(id)arg1;
- (void)setEmulateUserGesture:(bool)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
