
@interface MPCQueueControllerEdit : NSObject {
    bool  _allowsChangingCurrentItem;
    bool  _committed;
    NSString * _identifier;
    NSString * _label;
    MPCQueueController * _queueController;
    NSMutableDictionary * _suggestedContentItemIDs;
    NSString * _suggestedStartingContentItemID;
}

@property (nonatomic, readonly) bool allowsChangingCurrentItem;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) MPCQueueController *queueController;
@property (nonatomic, readonly, copy) NSDictionary *suggestedContentItemIDsForDeletedContentItemIDs;
@property (nonatomic, readonly, copy) NSString *suggestedStartingContentItemID;

- (void).cxx_destruct;
- (bool)allowsChangingCurrentItem;
- (void)commit;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithQueueController:(id)arg1 label:(id)arg2;
- (id)label;
- (id)queueController;
- (void)rollback;
- (void)setSuggestedContentItemID:(id)arg1 forDeletedContentItemID:(id)arg2;
- (void)setSuggestedContentItemIDForStart:(id)arg1;
- (id)suggestedContentItemIDsForDeletedContentItemIDs;
- (id)suggestedStartingContentItemID;

@end
