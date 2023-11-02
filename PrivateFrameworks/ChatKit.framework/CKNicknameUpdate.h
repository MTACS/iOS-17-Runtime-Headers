
@interface CKNicknameUpdate : NSObject {
    CNContact * _contact;
    IMHandle * _handle;
    IMNickname * _nickname;
    unsigned long long  _updateType;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) IMHandle *handle;
@property (nonatomic, retain) IMNickname *nickname;
@property (nonatomic) unsigned long long updateType;

- (void).cxx_destruct;
- (id)_updatedName;
- (id)condensedSubtitleText;
- (id)contact;
- (id)contactWithUpdatedInformation;
- (id)description;
- (id)handle;
- (bool)isEqual:(id)arg1;
- (id)listSubtitleText;
- (id)listTitleText;
- (id)nickname;
- (void)setContact:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (unsigned long long)updateType;

@end
