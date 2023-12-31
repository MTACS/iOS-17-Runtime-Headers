
@interface SAUSImageMarkup : AceObject <SAAceSerializable, SAUSMarkup>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIImageResource *imageResource;
@property (readonly) Class superclass;

+ (id)imageMarkup;
+ (id)imageMarkupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setImageResource:(id)arg1;

@end
