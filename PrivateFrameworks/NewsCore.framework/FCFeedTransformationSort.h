
@interface FCFeedTransformationSort : NSObject <FCFeedTransforming>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transformationWithSortMethod:(long long)arg1;
+ (id)transformationWithSortMethod:(long long)arg1 configurationSet:(long long)arg2 personalizer:(id)arg3;
+ (id)transformationWithSortMethod:(long long)arg1 personalizer:(id)arg2;

- (id)transformFeedItems:(id)arg1;

@end
