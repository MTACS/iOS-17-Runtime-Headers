
@interface NUSettings : NSObject <NSCopying, NUSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldShowArticlesInExcerptMode;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldShowArticlesInExcerptMode;

@end
