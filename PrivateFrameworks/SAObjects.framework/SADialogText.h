
@interface SADialogText : SABaseAceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *speakableTextOverride;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSpeakableTextOverride:(id)arg1;
- (void)setText:(id)arg1;
- (id)speakableTextOverride;
- (id)text;

@end
