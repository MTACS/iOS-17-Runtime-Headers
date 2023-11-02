
@interface CLSActivityReport : CLSReportItem <NSCopying, NSSecureCoding> {
    NSArray * _additionalReportItems;
    NSString * _contextAppBundleIdentifier;
    NSString * _contextID;
    NSString * _contextStableObjectID;
    NSString * _contextTitle;
    NSString * _contextTopic;
    long long  _contextType;
    int  _handoutAttachmentType;
    NSString * _handoutAuthorizedObjectID;
    CLSActivityReportItem * _primaryReportItem;
    CLSAggregatedValue * _progress;
    CLSAggregatedValue * _time;
}

@property (nonatomic, copy) NSArray *additionalReportItems;
@property (nonatomic, copy) NSString *contextAppBundleIdentifier;
@property (nonatomic, copy) NSString *contextID;
@property (nonatomic, copy) NSString *contextStableObjectID;
@property (nonatomic, copy) NSString *contextTitle;
@property (nonatomic, copy) NSString *contextTopic;
@property (nonatomic) long long contextType;
@property (nonatomic) int handoutAttachmentType;
@property (nonatomic, copy) NSString *handoutAuthorizedObjectID;
@property (nonatomic, copy) CLSActivityReportItem *primaryReportItem;
@property (nonatomic, copy) CLSAggregatedValue *progress;
@property (nonatomic, copy) CLSAggregatedValue *time;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (id)additionalReportItems;
- (long long)compare:(id)arg1;
- (id)contextAppBundleIdentifier;
- (id)contextID;
- (id)contextStableObjectID;
- (id)contextTitle;
- (id)contextTopic;
- (long long)contextType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)handoutAttachmentType;
- (id)handoutAuthorizedObjectID;
- (id)initWithCoder:(id)arg1;
- (id)primaryReportItem;
- (id)progress;
- (void)scalarMultiply:(double)arg1;
- (void)setAdditionalReportItems:(id)arg1;
- (void)setContextAppBundleIdentifier:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setContextStableObjectID:(id)arg1;
- (void)setContextTitle:(id)arg1;
- (void)setContextTopic:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setHandoutAttachmentType:(int)arg1;
- (void)setHandoutAuthorizedObjectID:(id)arg1;
- (void)setPrimaryReportItem:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
