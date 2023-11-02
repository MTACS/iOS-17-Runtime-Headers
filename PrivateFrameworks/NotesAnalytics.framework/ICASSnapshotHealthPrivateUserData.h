
@interface ICASSnapshotHealthPrivateUserData : NSObject <AADataEventType> {
    NSString * _snapshotHealthPrivateUserID;
}

@property (nonatomic, readonly) NSString *snapshotHealthPrivateUserID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSnapshotHealthPrivateUserID:(id)arg1;
- (id)snapshotHealthPrivateUserID;
- (id)toDict;

@end
