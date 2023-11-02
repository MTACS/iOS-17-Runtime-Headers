
@interface SAGKVideoPod : SAGKPodView

@property (nonatomic, copy) NSArray *videos;

+ (id)videoPod;
+ (id)videoPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setVideos:(id)arg1;
- (id)videos;

@end
