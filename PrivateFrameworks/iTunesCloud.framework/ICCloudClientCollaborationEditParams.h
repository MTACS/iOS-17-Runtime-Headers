
@interface ICCloudClientCollaborationEditParams : NSObject <NSSecureCoding> {
    unsigned long long  _itemAdamID;
    NSString * _itemUUID;
    long long  _positionType;
    NSString * _reactionString;
    NSString * _referencePositionUUID;
    NSDate * _timestamp;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long itemAdamID;
@property (nonatomic, readonly, copy) NSString *itemUUID;
@property (nonatomic, readonly) long long positionType;
@property (nonatomic, readonly, copy) NSString *reactionString;
@property (nonatomic, readonly, copy) NSString *referencePositionUUID;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) long long type;

+ (id)descriptionForPositionType:(long long)arg1;
+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)arg1 itemUUID:(id)arg2 afterReferencePositionUUD:(id)arg3;
+ (id)paramsForAddingTrackWithAdamID:(unsigned long long)arg1 itemUUID:(id)arg2 atPosition:(long long)arg3;
+ (id)paramsForMovingTrackWithItemUUID:(id)arg1 afterReferencePositionUUD:(id)arg2;
+ (id)paramsForMovingTrackWithItemUUID:(id)arg1 toPosition:(long long)arg2;
+ (id)paramsForRemovingTrackWithItemUUID:(id)arg1;
+ (id)paramsForSettingReaction:(id)arg1 onTrackWithItemUUID:(id)arg2;
+ (id)paramsForUnsettingReaction:(id)arg1 onTrackWithItemUUID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemAdamID;
- (id)itemUUID;
- (long long)positionType;
- (id)reactionString;
- (id)referencePositionUUID;
- (id)timestamp;
- (long long)type;

@end
