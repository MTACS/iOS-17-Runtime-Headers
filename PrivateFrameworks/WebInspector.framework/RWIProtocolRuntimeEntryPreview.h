
@interface RWIProtocolRuntimeEntryPreview : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolRuntimeObjectPreview *key;
@property (nonatomic, retain) RWIProtocolRuntimeObjectPreview *value;

- (id)initWithValue:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
