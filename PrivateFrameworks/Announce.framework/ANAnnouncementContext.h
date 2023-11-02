
@interface ANAnnouncementContext : NSObject <NSSecureCoding> {
    NSString * _announcementAudioPath;
    NSURL * _announcementAudioURL;
    NSString * _announcementID;
    NSString * _announcerID;
    bool  _announcerIsAccessory;
    NSString * _announcerName;
    NSString * _announcerUserID;
    NSString * _announcerUserUniqueID;
    NSNumber * _audioFileDuration;
    int  _deviceClass;
    NSString * _groupID;
    NSString * _homeID;
    NSString * _homeName;
    bool  _played;
    int  _productType;
    unsigned long long  _productTypeOverride;
    NSDictionary * _rooms;
    NSString * _serviceType;
    NSString * _subtitle;
    NSString * _transcriptionText;
    NSDictionary * _zones;
}

@property (nonatomic, readonly) NSString *announcementAudioPath;
@property (nonatomic, readonly) NSURL *announcementAudioURL;
@property (nonatomic, readonly) NSString *announcementID;
@property (nonatomic, readonly) NSString *announcerID;
@property (nonatomic, readonly) bool announcerIsAccessory;
@property (nonatomic, readonly) NSString *announcerName;
@property (nonatomic, readonly) NSString *announcerUserID;
@property (nonatomic, readonly) NSString *announcerUserUniqueID;
@property (nonatomic, readonly) NSNumber *audioFileDuration;
@property (nonatomic, readonly) NSDictionary *contextDictionary;
@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *homeID;
@property (nonatomic, readonly) NSString *homeName;
@property (nonatomic, readonly) bool played;
@property (nonatomic, readonly) int productType;
@property (nonatomic, readonly) unsigned long long productTypeOverride;
@property (nonatomic, readonly) NSDictionary *rooms;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *transcriptionText;
@property (nonatomic, readonly) NSDictionary *zones;

+ (id)contextFromDictionary:(id)arg1;
+ (id)contextFromUserInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)announcementAudioPath;
- (id)announcementAudioURL;
- (id)announcementID;
- (id)announcerID;
- (bool)announcerIsAccessory;
- (id)announcerName;
- (id)announcerUserID;
- (id)announcerUserUniqueID;
- (id)audioFileDuration;
- (id)contextDictionary;
- (id)description;
- (int)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)homeID;
- (id)homeName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUserInfo:(id)arg1;
- (bool)isEqualToContext:(id)arg1;
- (bool)played;
- (int)productType;
- (unsigned long long)productTypeOverride;
- (id)rooms;
- (id)serviceType;
- (id)subtitle;
- (id)transcriptionText;
- (id)zones;

@end
