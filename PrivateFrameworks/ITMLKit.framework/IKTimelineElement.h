
@interface IKTimelineElement : IKViewElement

@property (nonatomic, readonly, retain) NSArray *events;
@property (nonatomic, readonly) double refreshInterval;
@property (nonatomic, readonly) unsigned long long timelineType;
@property (nonatomic, readonly, retain) IKTextElement *title;
@property (nonatomic, readonly, retain) NSURL *url;

- (id)events;
- (double)refreshInterval;
- (unsigned long long)timelineType;
- (id)title;
- (id)url;

@end
