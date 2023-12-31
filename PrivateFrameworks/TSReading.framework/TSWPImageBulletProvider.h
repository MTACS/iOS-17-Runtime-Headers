
@interface TSWPImageBulletProvider : NSObject {
    NSMutableArray * _filenames;
    NSMutableArray * _images;
}

@property (nonatomic, readonly) NSArray *predefinedImages;

+ (id)sharedInstance;

- (id)dataForDefaultImageBulletWithContext:(id)arg1;
- (id)dataForImageBullet:(id)arg1 withContext:(id)arg2;
- (id)p_pathToPredefinedImages;
- (id)p_predefinedImageNames;
- (id)predefinedImages;

@end
