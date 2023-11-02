
@interface ATXStackStateTrackerInternalState : NSObject <NSSecureCoding> {
    NSMutableArray * _blendingCacheUpdateUUIDs;
    ATXBMBookmark * _bookmark;
    NSMutableDictionary * _cachedStackLayoutsByBlendingUpdateUUID;
    NSMutableDictionary * _lastThreeUserVisitDatesOfPages;
    NSMutableDictionary * _stackStateByStackId;
}

@property (nonatomic, retain) NSMutableArray *blendingCacheUpdateUUIDs;
@property (nonatomic, retain) ATXBMBookmark *bookmark;
@property (nonatomic, retain) NSMutableDictionary *cachedStackLayoutsByBlendingUpdateUUID;
@property (nonatomic, retain) NSMutableDictionary *lastThreeUserVisitDatesOfPages;
@property (nonatomic, retain) NSMutableDictionary *stackStateByStackId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingCacheUpdateUUIDs;
- (id)bookmark;
- (id)cachedStackLayoutsByBlendingUpdateUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastThreeUserVisitDatesOfPages;
- (void)setBlendingCacheUpdateUUIDs:(id)arg1;
- (void)setBookmark:(id)arg1;
- (void)setCachedStackLayoutsByBlendingUpdateUUID:(id)arg1;
- (void)setLastThreeUserVisitDatesOfPages:(id)arg1;
- (void)setStackStateByStackId:(id)arg1;
- (id)stackStateByStackId;
- (void)updateLastThreeUserVisitDatesIfNecessaryForPage:(id)arg1 date:(id)arg2;

@end
