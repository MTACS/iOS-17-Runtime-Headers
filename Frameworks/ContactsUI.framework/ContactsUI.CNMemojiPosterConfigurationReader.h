
@interface ContactsUI.CNMemojiPosterConfigurationReader : NSObject {
    void memojiPosterConfiguration;
}

@property (nonatomic, readonly) NSData *avatarImageData;
@property (nonatomic, readonly) NSData *avatarPoseData;
@property (nonatomic, readonly) NSData *avatarRecordData;
@property (nonatomic, readonly) UIColor *backgroundColor;

+ (bool)canReadConfiguration;
+ (id)memojiPosterConfigurationDataFromUserInfo:(id)arg1;

- (void).cxx_destruct;
- (id)avatarImageData;
- (id)avatarPoseData;
- (id)avatarRecordData;
- (id)backgroundColor;
- (id)init;
- (id)initWithPosterConfigurationUserInfo:(id)arg1;

@end
