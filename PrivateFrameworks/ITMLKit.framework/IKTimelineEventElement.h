
@interface IKTimelineEventElement : IKViewElement

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly, retain) IKViewElement *relatedContent;
@property (nonatomic, readonly, retain) NSDate *startDate;

- (double)duration;
- (double)offset;
- (id)relatedContent;
- (id)startDate;

@end
