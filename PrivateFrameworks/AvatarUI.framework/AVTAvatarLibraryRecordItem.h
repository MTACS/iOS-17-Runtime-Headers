
@interface AVTAvatarLibraryRecordItem : NSObject <AVTAvatarLibraryItem> {
    <AVTAvatarRecord> * _avatarRecord;
    AVTUIEnvironment * _environment;
}

@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)avatarRecord;
- (void)configureCell:(id)arg1 imageProvider:(id)arg2;
- (id)environment;
- (id)initWithAvatarRecord:(id)arg1 environment:(id)arg2;

@end
