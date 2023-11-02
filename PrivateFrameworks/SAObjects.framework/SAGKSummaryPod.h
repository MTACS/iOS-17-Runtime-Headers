
@interface SAGKSummaryPod : SAGKPodView

@property (nonatomic, copy) NSString *caption;
@property (nonatomic, retain) SAUIImageResource *imageResource;
@property (nonatomic, copy) NSString *text;

+ (id)summaryPod;
+ (id)summaryPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)caption;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setCaption:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
