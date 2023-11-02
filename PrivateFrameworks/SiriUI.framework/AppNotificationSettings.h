
@interface AppNotificationSettings : NSObject {
    bool  _announceEnabled;
    bool  _carPlayBannersEnabled;
}

@property (getter=isAnnounceEnabled, nonatomic) bool announceEnabled;
@property (getter=areCarPlayBannersEnabled, nonatomic) bool carPlayBannersEnabled;

- (bool)areCarPlayBannersEnabled;
- (id)initWithAnnounceEnabled:(bool)arg1 carPlayBannersEnabled:(bool)arg2;
- (bool)isAnnounceEnabled;
- (bool)isEqual:(id)arg1;
- (void)setAnnounceEnabled:(bool)arg1;
- (void)setCarPlayBannersEnabled:(bool)arg1;

@end
