
@interface HMDAnalyticsUpdateEventTriggerData : HMFObject {
    int  _requestOrigin;
    unsigned int  _resultErrorCode;
    unsigned long long  _timestamp;
    int  _updateType;
}

@property int requestOrigin;
@property unsigned int resultErrorCode;
@property unsigned long long timestamp;
@property int updateType;

- (int)requestOrigin;
- (unsigned int)resultErrorCode;
- (void)setRequestOrigin:(int)arg1;
- (void)setResultErrorCode:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUpdateType:(int)arg1;
- (unsigned long long)timestamp;
- (int)updateType;

@end
