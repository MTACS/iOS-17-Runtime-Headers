
@protocol AVTAvatarLibraryItem <NSObject>

@required

+ (NSString *)cellIdentifier;

- (void)configureCell:(UICollectionViewCell *)arg1 imageProvider:(_AVTAvatarRecordImageProvider *)arg2;

@end
