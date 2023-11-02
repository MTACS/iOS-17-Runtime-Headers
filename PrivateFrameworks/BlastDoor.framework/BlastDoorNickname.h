
@interface BlastDoorNickname : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  nickname;
}

@property (nonatomic, readonly) BlastDoorAvatarImage *avatar;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) BlastDoorMorphology *pronouns;
@property (nonatomic, readonly) BlastDoorWallpaper *wallpaper;

- (void).cxx_destruct;
- (id)avatar;
- (id)description;
- (id)firstName;
- (id)init;
- (id)lastName;
- (id)pronouns;
- (id)wallpaper;

@end
