
@interface IKMediaElement : IKViewElement

@property (nonatomic, readonly, retain) NSArray *assets;
@property (nonatomic, readonly) IKViewElement *relatedContent;
@property (nonatomic, readonly) unsigned long long scrubBehavior;

- (id)assets;
- (id)relatedContent;
- (unsigned long long)scrubBehavior;

@end
