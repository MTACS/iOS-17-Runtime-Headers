
@interface _LTDSELFLoggingSessionIdProvider : NSObject {
    SISchemaUUID * _cachedSessionId;
    NSDate * _dateSessionIdMostRecentlyAccessesOrCreated;
}

@property (nonatomic, readonly) NSDate *dateSessionIdMostRecentlyAccessesOrCreated;
@property (nonatomic, readonly) SISchemaUUID *sessionId;

- (void).cxx_destruct;
- (id)dateSessionIdMostRecentlyAccessesOrCreated;
- (id)sessionId;

@end
