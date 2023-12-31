
@interface NTFeedTransformationItemFeedTransformation : NSObject <NTFeedTransforming> {
    <FCFeedTransforming> * _feedItemTransformation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedTransforming> *feedItemTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)feedItemTransformation;
- (id)init;
- (id)initWithFeedItemTransformation:(id)arg1;
- (void)setFeedItemTransformation:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end
