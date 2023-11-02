
@interface CKApplicationState : NSObject

+ (bool)_isUIExtension;
+ (bool)isApplicationActive;
+ (bool)isBackground;
+ (bool)isResizing;
+ (bool)isWindowForegroundActive:(id)arg1;
+ (void)setActive:(bool)arg1;

@end
