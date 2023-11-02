
@interface ICASFastSyncData : NSObject <AADataEventType> {
    NSString * _fastSyncSessionId;
    NSArray * _participantVersions;
}

@property (nonatomic, readonly) NSString *fastSyncSessionId;
@property (nonatomic, readonly) NSArray *participantVersions;

+ (id)dataName;

- (void).cxx_destruct;
- (id)fastSyncSessionId;
- (id)initWithFastSyncSessionId:(id)arg1 participantVersions:(id)arg2;
- (id)participantVersions;
- (id)toDict;

@end
