
@interface ATXNotificationsPBGradedRecord : PBCodable <NSCopying> {
    NSString * _bundleId;
    ATXNotificationsPBContext * _context;
    ATXNotificationsPBGrade * _grade;
    struct { 
        unsigned int suppActions : 1; 
        unsigned int timezone : 1; 
    }  _has;
    NSString * _message;
    NSString * _subtitle;
    int  _suppActions;
    int  _timezone;
    NSString * _title;
    NSString * _topic;
    NSString * _userid;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) ATXNotificationsPBContext *context;
@property (nonatomic, retain) ATXNotificationsPBGrade *grade;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasGrade;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic) bool hasSuppActions;
@property (nonatomic) bool hasTimezone;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic, readonly) bool hasUserid;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic) int suppActions;
@property (nonatomic) int timezone;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, retain) NSString *userid;

- (void).cxx_destruct;
- (id)bundleId;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)grade;
- (bool)hasBundleId;
- (bool)hasContext;
- (bool)hasGrade;
- (bool)hasMessage;
- (bool)hasSubtitle;
- (bool)hasSuppActions;
- (bool)hasTimezone;
- (bool)hasTitle;
- (bool)hasTopic;
- (bool)hasUserid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setGrade:(id)arg1;
- (void)setHasSuppActions:(bool)arg1;
- (void)setHasTimezone:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuppActions:(int)arg1;
- (void)setTimezone:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUserid:(id)arg1;
- (id)subtitle;
- (int)suppActions;
- (int)timezone;
- (id)title;
- (id)topic;
- (id)userid;
- (void)writeTo:(id)arg1;

@end
