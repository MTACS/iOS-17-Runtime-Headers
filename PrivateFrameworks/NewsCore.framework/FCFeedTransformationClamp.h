
@interface FCFeedTransformationClamp : NSObject <FCFeedTransforming> {
    FCFeedRange * _feedRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCFeedRange *feedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transformationWithDateRange:(id)arg1;
+ (id)transformationWithFeedRange:(id)arg1;

- (void).cxx_destruct;
- (id)feedRange;
- (void)setFeedRange:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end
