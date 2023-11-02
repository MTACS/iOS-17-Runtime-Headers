
@interface BLTPBSectionInfoSettings : PBCodable <NSCopying> {
    int  _announceSetting;
    struct { 
        unsigned int announceSetting : 1; 
        unsigned int scheduledDeliverySetting : 1; 
        unsigned int timeSensitiveSetting : 1; 
        unsigned int userConfiguredTimeSensitiveSetting : 1; 
    }  _has;
    BLTPBMuteAssertion * _muteAssertion;
    int  _scheduledDeliverySetting;
    int  _timeSensitiveSetting;
    bool  _userConfiguredTimeSensitiveSetting;
}

@property (nonatomic) int announceSetting;
@property (nonatomic) bool hasAnnounceSetting;
@property (nonatomic, readonly) bool hasMuteAssertion;
@property (nonatomic) bool hasScheduledDeliverySetting;
@property (nonatomic) bool hasTimeSensitiveSetting;
@property (nonatomic) bool hasUserConfiguredTimeSensitiveSetting;
@property (nonatomic, retain) BLTPBMuteAssertion *muteAssertion;
@property (nonatomic) int scheduledDeliverySetting;
@property (nonatomic) int timeSensitiveSetting;
@property (nonatomic) bool userConfiguredTimeSensitiveSetting;

- (void).cxx_destruct;
- (int)announceSetting;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnnounceSetting;
- (bool)hasMuteAssertion;
- (bool)hasScheduledDeliverySetting;
- (bool)hasTimeSensitiveSetting;
- (bool)hasUserConfiguredTimeSensitiveSetting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)muteAssertion;
- (bool)readFrom:(id)arg1;
- (int)scheduledDeliverySetting;
- (void)setAnnounceSetting:(int)arg1;
- (void)setHasAnnounceSetting:(bool)arg1;
- (void)setHasScheduledDeliverySetting:(bool)arg1;
- (void)setHasTimeSensitiveSetting:(bool)arg1;
- (void)setHasUserConfiguredTimeSensitiveSetting:(bool)arg1;
- (void)setMuteAssertion:(id)arg1;
- (void)setScheduledDeliverySetting:(int)arg1;
- (void)setTimeSensitiveSetting:(int)arg1;
- (void)setUserConfiguredTimeSensitiveSetting:(bool)arg1;
- (int)timeSensitiveSetting;
- (bool)userConfiguredTimeSensitiveSetting;
- (void)writeTo:(id)arg1;

@end
