
@interface FCFeedTransformationLowQualityContentFilter : NSObject <FCFeedTransforming> {
    <FCFeedPersonalizing> * _feedPersonalizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transformationWithPersonalizer:(id)arg1;

- (void).cxx_destruct;
- (id)feedPersonalizer;
- (void)setFeedPersonalizer:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end
