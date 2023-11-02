
@interface ICASSyncHealthPrivateUserData : NSObject <AADataEventType> {
    NSString * _syncHealthPrivateUserID;
}

@property (nonatomic, readonly) NSString *syncHealthPrivateUserID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSyncHealthPrivateUserID:(id)arg1;
- (id)syncHealthPrivateUserID;
- (id)toDict;

@end
