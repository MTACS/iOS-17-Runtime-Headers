
@interface ARUISpriteSheetFactory : NSObject {
    ARUISpriteTexture * _defaultSpriteTexture;
    ARUISpriteTexture * _sharingSpriteTexture;
    ARUISpriteTexture * _wheelchairSharingSpriteTexture;
    ARUISpriteTexture * _wheelchairSpriteTexture;
}

+ (id)defaultSpriteSheet;
+ (id)sharedInstance;
+ (id)sharingSpriteSheet;
+ (id)spriteSheetForRingType:(long long)arg1;
+ (id)wheelchairSharingSpriteSheet;
+ (id)wheelchairSpriteSheet;
+ (id)wheelchairSpriteSheetForRingType:(long long)arg1;

- (void).cxx_destruct;
- (id)_defaultSpriteImageFallback;
- (id)_defaultWheelchairSpriteImageFallback;
- (id)defaultSpriteTexture;
- (id)sharingSpriteTexture;
- (id)wheelchairSharingSpriteTexture;
- (id)wheelchairSpriteTexture;

@end
