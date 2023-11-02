
@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *frameId;
@property (nonatomic) int identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;

- (id)frameId;
- (int)identifier;
- (id)initWithIdentifier:(int)arg1 type:(long long)arg2 name:(id)arg3 frameId:(id)arg4;
- (id)name;
- (void)setFrameId:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
