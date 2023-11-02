
@interface NDAnalyticsPayloadInfo : NSObject <NDAnalyticsPayloadInfo> {
    NSDictionary * _droppedEntriesByReason;
    NSURL * _endpointURL;
    NSArray * _entriesToUpload;
    NSDictionary * _valuesByHTTPHeaderField;
}

@property (nonatomic, copy) NSDictionary *droppedEntriesByReason;
@property (nonatomic, copy) NSURL *endpointURL;
@property (nonatomic, copy) NSArray *entriesToUpload;
@property (nonatomic, copy) NSDictionary *valuesByHTTPHeaderField;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)droppedEntriesByReason;
- (id)endpointURL;
- (id)entriesToUpload;
- (id)init;
- (void)setDroppedEntriesByReason:(id)arg1;
- (void)setEndpointURL:(id)arg1;
- (void)setEntriesToUpload:(id)arg1;
- (void)setValuesByHTTPHeaderField:(id)arg1;
- (id)valuesByHTTPHeaderField;

@end
