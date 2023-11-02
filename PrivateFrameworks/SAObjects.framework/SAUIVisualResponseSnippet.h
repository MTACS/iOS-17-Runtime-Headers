
@interface SAUIVisualResponseSnippet : SAUISnippet

@property (nonatomic, copy) NSData *modelData;
@property (nonatomic, copy) NSString *viewIdentifier;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)modelData;
- (void)setModelData:(id)arg1;
- (void)setViewIdentifier:(id)arg1;
- (id)viewIdentifier;

@end
