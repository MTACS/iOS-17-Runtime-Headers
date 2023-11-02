
@interface RWIProtocolRuntimeCallArgument : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *objectId;
@property (nonatomic, retain) RWIProtocolJSONObject *value;

- (id)objectId;
- (void)setObjectId:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
