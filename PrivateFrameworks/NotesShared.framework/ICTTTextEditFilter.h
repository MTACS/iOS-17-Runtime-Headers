
@interface ICTTTextEditFilter : NSObject <NSCopying> {
    NSSet * _allowedAttachmentIDs;
    NSSet * _allowedUserIDs;
    bool  _allowsMissingTimestamps;
    bool  _allowsMissingUsers;
    NSDate * _fromDate;
    NSDate * _toDate;
}

@property (nonatomic, copy) NSSet *allowedAttachmentIDs;
@property (nonatomic, copy) NSSet *allowedUserIDs;
@property (nonatomic) bool allowsMissingTimestamps;
@property (nonatomic) bool allowsMissingUsers;
@property (nonatomic, copy) NSDate *fromDate;
@property (nonatomic, copy) NSDate *toDate;

- (void).cxx_destruct;
- (id)allowedAttachmentIDs;
- (id)allowedUserIDs;
- (bool)allowsMissingTimestamps;
- (bool)allowsMissingUsers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fromDate;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAllowedAttachmentIDs:(id)arg1;
- (void)setAllowedUserIDs:(id)arg1;
- (void)setAllowsMissingTimestamps:(bool)arg1;
- (void)setAllowsMissingUsers:(bool)arg1;
- (void)setFromDate:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)toDate;

@end
