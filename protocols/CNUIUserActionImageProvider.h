
@protocol CNUIUserActionImageProvider <NSObject>

@required

+ (UIImage *)imageForActionType:(NSString *)arg1 imageStyle:(long long)arg2;
+ (NSString *)symbolImageNameForActionType:(NSString *)arg1;
+ (NSString *)symbolOulinedImageNameForActionType:(NSString *)arg1;

@end
