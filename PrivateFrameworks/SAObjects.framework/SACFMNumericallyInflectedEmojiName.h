
@interface SACFMNumericallyInflectedEmojiName : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *withEmoji;
@property (nonatomic, copy) NSString *withoutEmoji;

+ (id)numericallyInflectedEmojiName;
+ (id)numericallyInflectedEmojiNameWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setWithEmoji:(id)arg1;
- (void)setWithoutEmoji:(id)arg1;
- (id)withEmoji;
- (id)withoutEmoji;

@end
