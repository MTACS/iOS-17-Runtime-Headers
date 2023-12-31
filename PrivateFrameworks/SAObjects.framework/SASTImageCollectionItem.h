
@interface SASTImageCollectionItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *images;
@property (readonly) Class superclass;

+ (id)imageCollectionItem;
+ (id)imageCollectionItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)images;
- (void)setImages:(id)arg1;

@end
