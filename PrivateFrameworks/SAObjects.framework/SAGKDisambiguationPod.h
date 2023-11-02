
@interface SAGKDisambiguationPod : SAGKPodView

@property (nonatomic, copy) NSString *text;

+ (id)disambiguationPod;
+ (id)disambiguationPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setText:(id)arg1;
- (id)text;

@end
