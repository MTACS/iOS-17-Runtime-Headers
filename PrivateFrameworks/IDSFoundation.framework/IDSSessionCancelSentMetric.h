
@interface IDSSessionCancelSentMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _guid;
    NSNumber * _numberOfRecipients;
    unsigned int  _remoteSessionEndReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *numberOfRecipients;
@property (nonatomic, readonly) unsigned int remoteSessionEndReason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)guid;
- (id)initWithGuid:(id)arg1 numberOfRecipients:(id)arg2 remoteSessionEndReason:(unsigned int)arg3;
- (id)name;
- (id)numberOfRecipients;
- (unsigned int)remoteSessionEndReason;

@end
