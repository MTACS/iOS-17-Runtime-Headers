
@interface REMFetchResult : NSObject <NSSecureCoding> {
    long long  _count;
    REMFetchResultToken * _fetchResultToken;
    NSArray * _fetchedAccountStorages;
    NSArray * _fetchedListStorages;
    NSArray * _fetchedReminderStorages;
    REMFetchMetadata * _metadata;
    NSArray * _requestedObjectIDs;
    long long  _type;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, retain) REMFetchResultToken *fetchResultToken;
@property (nonatomic, readonly) NSArray *fetchedAccountStorages;
@property (nonatomic, readonly) NSArray *fetchedListStorages;
@property (nonatomic, readonly) NSArray *fetchedReminderStorages;
@property (nonatomic, readonly) REMFetchMetadata *metadata;
@property (nonatomic, readonly) NSArray *requestedObjectIDs;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchResultToken;
- (id)fetchedAccountStorages;
- (id)fetchedListStorages;
- (id)fetchedReminderStorages;
- (id)initWithAccountStorages:(id)arg1;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 requestedObjectIDs:(id)arg4 metadata:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithCount:(long long)arg1;
- (id)initWithListStorages:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithReminderStorages:(id)arg1;
- (id)initWithRequestedObjectIDs:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)metadata;
- (id)requestedObjectIDs;
- (void)setFetchResultToken:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
