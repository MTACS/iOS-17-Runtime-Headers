
@interface NUFeedTitleViewUpdate : NSObject <NSCopying> {
    NSString * _accessibilityTitle;
    NSAttributedString * _attributedText;
    UIImage * _feedImage;
    NSString * _feedName;
    double  _lingerTimeInterval;
    unsigned long long  _storyCount;
    unsigned long long  _type;
    unsigned long long  _updateType;
}

@property (nonatomic, copy) NSString *accessibilityTitle;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIImage *feedImage;
@property (nonatomic, copy) NSString *feedName;
@property (nonatomic) double lingerTimeInterval;
@property (nonatomic) unsigned long long storyCount;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) unsigned long long updateType;

+ (id)feedTitleViewUpdateCheckingForNewStoriesForType:(unsigned long long)arg1;
+ (id)feedTitleViewUpdateCheckingForUpdatesForType:(unsigned long long)arg1;
+ (id)feedTitleViewUpdateEmptyState;
+ (id)feedTitleViewUpdateEmptyStateForType:(unsigned long long)arg1;
+ (id)feedTitleViewUpdateForAttributedText:(id)arg1;
+ (id)feedTitleViewUpdateForAttributedText:(id)arg1 forType:(unsigned long long)arg2;
+ (id)feedTitleViewUpdateForCheckingForNewStories;
+ (id)feedTitleViewUpdateForCheckingForUpdates;
+ (id)feedTitleViewUpdateForFeedImage:(id)arg1 accessibilityTitle:(id)arg2;
+ (id)feedTitleViewUpdateForFeedName:(id)arg1;
+ (id)feedTitleViewUpdateForNewStoriesWithStoryCount:(unsigned long long)arg1;
+ (id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)arg1 storyCount:(unsigned long long)arg2;
+ (id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)arg1 storyCount:(unsigned long long)arg2 linger:(bool)arg3;

- (void).cxx_destruct;
- (id)accessibilityTitle;
- (id)attributedText;
- (id)convertToTitleViewUpdateWithCompact:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedImage;
- (id)feedName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 updateType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (double)lingerTimeInterval;
- (void)setAccessibilityTitle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFeedImage:(id)arg1;
- (void)setFeedName:(id)arg1;
- (void)setLingerTimeInterval:(double)arg1;
- (void)setStoryCount:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)storyCount;
- (unsigned long long)type;
- (unsigned long long)updateType;

@end
