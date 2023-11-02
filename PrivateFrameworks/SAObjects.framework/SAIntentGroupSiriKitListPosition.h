
@interface SAIntentGroupSiriKitListPosition : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long offset;
@property (nonatomic, copy) NSString *position;
@property (readonly) Class superclass;

+ (id)siriKitListPosition;
+ (id)siriKitListPositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)offset;
- (id)position;
- (void)setOffset:(long long)arg1;
- (void)setPosition:(id)arg1;

@end
