
@interface AVTAvatarActionsRecordUpdate : NSObject {
    <AVTAvatarRecord> * _avatarRecord;
    bool  _fromLeft;
}

@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, readonly) bool fromLeft;

+ (id)recordUpdateForDeletingRecord:(id)arg1 withDataSource:(id)arg2;

- (void).cxx_destruct;
- (id)avatarRecord;
- (bool)fromLeft;
- (id)initWithAvatarRecord:(id)arg1 fromLeft:(bool)arg2;

@end
