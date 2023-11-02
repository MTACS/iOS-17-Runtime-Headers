
@interface FCFeedTransformationIdentity : NSObject <FCFeedTransforming>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)transformFeedItems:(id)arg1;

@end
