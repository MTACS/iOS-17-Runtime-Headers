
@interface ICThumbnailGeneratorAvatar : ICThumbnailGenerator {
    bool  _RTL;
    CNAvatarImageRenderer * _renderer;
}

@property (getter=isRTL, nonatomic, readonly) bool RTL;
@property (nonatomic, readonly) CNAvatarImageRenderer *renderer;

- (void).cxx_destruct;
- (void)drawWithBorderIntoContext:(struct CGContext { }*)arg1 avatarImage:(id)arg2;
- (void)generateThumbnailWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (bool)isRTL;
- (id)renderer;

@end
