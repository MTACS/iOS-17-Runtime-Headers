
@interface NSPersistentCloudKitContainerEvent : NSObject <NSCopying> {
    NSManagedObjectID * _ckEventObjectID;
    NSDate * _endDate;
    NSError * _error;
    NSUUID * _identifier;
    NSDate * _startDate;
    NSString * _storeIdentifier;
    bool  _succeeded;
    long long  _type;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *storeIdentifier;
@property (nonatomic, readonly) bool succeeded;
@property (nonatomic, readonly) long long type;

+ (id)eventTypeString:(long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)endDate;
- (id)error;
- (id)identifier;
- (id)initWithCKEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)startDate;
- (id)storeIdentifier;
- (bool)succeeded;
- (long long)type;

@end
