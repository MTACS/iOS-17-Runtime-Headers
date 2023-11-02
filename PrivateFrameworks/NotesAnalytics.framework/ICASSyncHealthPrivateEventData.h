
@interface ICASSyncHealthPrivateEventData : NSObject <AADataEventType> {
    NSString * _syncHealthPrivateSessionID;
}

@property (nonatomic, readonly) NSString *syncHealthPrivateSessionID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSyncHealthPrivateSessionID:(id)arg1;
- (id)syncHealthPrivateSessionID;
- (id)toDict;

@end
