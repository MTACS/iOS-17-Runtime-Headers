
@interface SAGKWebLinkPod : SAGKPodView

@property (nonatomic, copy) NSArray *links;

+ (id)webLinkPod;
+ (id)webLinkPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)links;
- (void)setLinks:(id)arg1;

@end
