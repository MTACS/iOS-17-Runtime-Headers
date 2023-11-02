
@interface PRSPosterUpdate : NSObject <NSSecureCoding> {
    PRSPosterUpdatePayload * _payload;
    unsigned long long  _type;
}

@property (nonatomic, readonly) PRSPosterUpdatePayload *payload;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) bool updateNecessitatesPosterUpdate;

+ (id)posterUpdateAmbientConfigurationForCreation:(id)arg1 deletion:(id)arg2 editingBehavior:(id)arg3 supportedDataLayout:(id)arg4;
+ (id)posterUpdateAmbientWidgets:(id)arg1;
+ (id)posterUpdateAssociateWithChargerIdentifier:(id)arg1;
+ (id)posterUpdateComplications:(id)arg1;
+ (id)posterUpdateDisassociateFromChargerIdentifier:(id)arg1;
+ (id)posterUpdateHomeScreenAppearance:(unsigned long long)arg1;
+ (id)posterUpdateHomeScreenColor:(id)arg1;
+ (id)posterUpdateHomeScreenGradient:(id)arg1;
+ (id)posterUpdateHomeScreenPosterLegibilityBlurWithValue:(bool)arg1;
+ (id)posterUpdateHomeScreenPosterProvider:(id)arg1 sessionInfo:(id)arg2;
+ (id)posterUpdateHomeScreenPosterWithImageAtURL:(id)arg1;
+ (id)posterUpdateInlineComplication:(id)arg1;
+ (id)posterUpdateLegibilityBlurWithValue:(bool)arg1;
+ (id)posterUpdateLockScreenPosterWithImageAtURL:(id)arg1;
+ (id)posterUpdateMirroredHomeScreenLegibilityBlurWithValue:(bool)arg1;
+ (id)posterUpdatePosterWithSessionInfo:(id)arg1;
+ (id)posterUpdateSidebarComplications:(id)arg1;
+ (id)posterUpdatesForDecoratedSessionInfo:(id)arg1;
+ (id)posterUpdatesForWFWallpaperConfiguration:(id)arg1;
+ (id)posterUpdatesForWFWallpaperConfiguration:(id)arg1 sessionInfo:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithUpdateType:(unsigned long long)arg1 payload:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (unsigned long long)type;
- (bool)updateNecessitatesPosterUpdate;

@end
