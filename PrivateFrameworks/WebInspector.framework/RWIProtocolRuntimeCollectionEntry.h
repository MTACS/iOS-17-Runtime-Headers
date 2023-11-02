
@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *key;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *value;

- (id)initWithValue:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
