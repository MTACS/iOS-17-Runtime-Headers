
@interface MFSMTPResponse : NSObject <NSCopying> {
    NSArray * _continuationResponses;
    id  _lastResponseLine;
    unsigned long long  _status;
    unsigned int  _statusClass;
    unsigned int  _statusDetail;
    NSString * _statusString;
    unsigned int  _statusSubject;
}

@property (nonatomic, retain) NSArray *continuationResponses;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) unsigned int statusClass;
@property (nonatomic, readonly) unsigned int statusDetail;
@property (nonatomic, readonly) NSString *statusString;
@property (nonatomic, readonly) unsigned int statusSubject;

- (void).cxx_destruct;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (id)continuationResponses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (long long)failureReason;
- (id)initWithStatus:(unsigned long long)arg1;
- (id)lastResponseLine;
- (void)setContinuationResponses:(id)arg1;
- (void)setLastResponseLine:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (unsigned int)statusClass;
- (unsigned int)statusDetail;
- (id)statusString;
- (unsigned int)statusSubject;

@end
