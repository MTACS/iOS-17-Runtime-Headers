
@interface FCFeedTransformationHideInAutoFavorites : NSObject <FCFeedTransforming> {
    NSSet * _autoFavoriteTagIDs;
    NSDictionary * _feedContextByFeedID;
}

@property (nonatomic, copy) NSSet *autoFavoriteTagIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *feedContextByFeedID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transformationWithFeedContextByFeedID:(id)arg1 autoFavoriteTagIDs:(id)arg2;

- (void).cxx_destruct;
- (id)autoFavoriteTagIDs;
- (id)feedContextByFeedID;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setFeedContextByFeedID:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end
