
@interface RWIProtocolRuntimeInternalPropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *value;

- (id)initWithName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
