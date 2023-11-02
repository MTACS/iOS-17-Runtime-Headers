
@interface SAGKSourceLinkPod : SAGKPodView

@property (nonatomic, copy) NSString *linkText;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;

+ (id)sourceLinkPod;
+ (id)sourceLinkPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkText;
- (id)punchOut;
- (void)setLinkText:(id)arg1;
- (void)setPunchOut:(id)arg1;

@end
