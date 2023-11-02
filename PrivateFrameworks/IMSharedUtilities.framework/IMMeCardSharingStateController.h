
@interface IMMeCardSharingStateController : NSObject

@property (nonatomic) bool imageForkedFromMeCard;
@property (nonatomic) bool nameForkedFromMeCard;
@property (nonatomic) unsigned long long nameFormat;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic) bool sharingEnabled;

+ (id)sharedInstance;

- (void)_incrementSharingVersion;
- (void)_migrateMeCardDomains;
- (void)_syncPreferenceDidChange;
- (bool)imageForkedFromMeCard;
- (id)init;
- (bool)nameForkedFromMeCard;
- (unsigned long long)nameFormat;
- (void)postNameFormatChangedNotification;
- (void)setImageForkedFromMeCard:(bool)arg1;
- (void)setNameForkedFromMeCard:(bool)arg1;
- (void)setNameFormat:(unsigned long long)arg1;
- (void)setSharingAudience:(unsigned long long)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (unsigned long long)sharingAudience;
- (bool)sharingEnabled;
- (bool)wasSharingEverEnabled;

@end
