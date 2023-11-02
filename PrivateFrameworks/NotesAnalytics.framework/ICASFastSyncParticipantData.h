
@interface ICASFastSyncParticipantData : NSObject <AADataEventType> {
    NSNumber * _countOfUniqueAccounts;
    NSNumber * _countOfUniqueDevices;
}

@property (nonatomic, readonly) NSNumber *countOfUniqueAccounts;
@property (nonatomic, readonly) NSNumber *countOfUniqueDevices;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfUniqueAccounts;
- (id)countOfUniqueDevices;
- (id)initWithCountOfUniqueAccounts:(id)arg1 countOfUniqueDevices:(id)arg2;
- (id)toDict;

@end
