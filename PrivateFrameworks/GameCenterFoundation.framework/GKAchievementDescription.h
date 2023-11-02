
@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {
    UIImage * _image;
    GKAchievementInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *achievedDescription;
@property (nonatomic, readonly, retain) NSString *groupIdentifier;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (retain) GKAchievementInternal *internal;
@property (nonatomic, readonly) long long maximumPoints;
@property (readonly, copy) NSNumber *rarityPercent;
@property (getter=isReplayable, nonatomic, readonly) bool replayable;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *unachievedDescription;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_achievementDescriptionFromGame:(id)arg1 propertyListDictionary:(id)arg2;
+ (id)_loadLocalAchievementDescriptionsForGame:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)image;
- (id)imageNameForIcon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setImage:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)incompleteAchievementImage;
+ (id)placeholderCompletedAchievementImage;

- (id)imageURL;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)loadImageWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)showBanner;

@end
