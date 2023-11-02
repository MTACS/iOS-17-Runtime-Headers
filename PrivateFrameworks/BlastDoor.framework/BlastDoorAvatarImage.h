
@interface BlastDoorAvatarImage : NSObject {
    void avatarImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) NSString *imageName;

- (void).cxx_destruct;
- (id)description;
- (id)image;
- (id)imageName;
- (id)init;

@end
