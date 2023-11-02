
@interface ATXNotificationsInterface : NSObject <NSSecureCoding> {
    unsigned long long  _feed;
    NSString * _message;
    unsigned long long  _numSuppActions;
    NSDate * _publicationDate;
    NSString * _sectionID;
    NSString * _subtitle;
    NSString * _title;
    NSString * _topic;
}

@property (nonatomic) unsigned long long feed;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) unsigned long long numSuppActions;
@property (nonatomic, retain) NSDate *publicationDate;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *topic;

+ (id)createArchivedMetadata:(id)arg1 categoryId:(id)arg2 title:(id)arg3 subtitle:(id)arg4 message:(id)arg5 numSuppActions:(id)arg6 feed:(unsigned long long)arg7;
+ (id)getBundleIdFromMetadata:(id)arg1;
+ (unsigned long long)getFeedFromMetadata:(id)arg1;
+ (id)getMessageFromMetadata:(id)arg1;
+ (id)getNumSuppActionsFromMetadata:(id)arg1;
+ (id)getSubtitleFromMetadata:(id)arg1;
+ (id)getTimezoneFromMetadata:(id)arg1;
+ (id)getTitleFromMetadata:(id)arg1;
+ (id)getTopicFromMetadata:(id)arg1;
+ (void)stripContentInMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extractMetadata;
- (unsigned long long)feed;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (unsigned long long)numSuppActions;
- (id)publicationDate;
- (id)sectionID;
- (void)setFeed:(unsigned long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setNumSuppActions:(unsigned long long)arg1;
- (void)setPublicationDate:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)topic;

@end
