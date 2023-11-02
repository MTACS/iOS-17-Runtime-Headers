
@interface WLKContinuationMetadata : WLKContinuationMetadataBase {
    NSString * _deleteID;
    WLKPlayable * _playable;
    NSArray * _siriActionsCategories;
    NSNumber * _siriActionsExpirationEpochMillis;
}

@property (nonatomic, readonly, copy) NSString *deleteID;
@property (nonatomic, readonly) WLKPlayable *playable;
@property (nonatomic, readonly, copy) NSArray *siriActionsCategories;
@property (nonatomic, readonly, copy) NSNumber *siriActionsExpirationEpochMillis;

- (void).cxx_destruct;
- (id)deleteID;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)playable;
- (id)siriActionsCategories;
- (id)siriActionsExpirationEpochMillis;

@end
