
@protocol CNUILikenessBadge <NSObject, CNUILikenessBadgeTypeProvider>

@required

- (unsigned long long)badgeType;
- (UIImage *)image;
- (NSData *)imageData;
- (void)setBadgeType:(unsigned long long)arg1;

@end
