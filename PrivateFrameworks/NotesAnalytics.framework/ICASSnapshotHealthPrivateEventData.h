
@interface ICASSnapshotHealthPrivateEventData : NSObject <AADataEventType> {
    NSString * _snapshotHealthPrivateSessionID;
}

@property (nonatomic, readonly) NSString *snapshotHealthPrivateSessionID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSnapshotHealthPrivateSessionID:(id)arg1;
- (id)snapshotHealthPrivateSessionID;
- (id)toDict;

@end
