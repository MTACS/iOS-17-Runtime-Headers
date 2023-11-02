
@interface HAPMutableKeychainItem : HAPKeychainItem

@property (nonatomic, retain) NSString *accessGroup;
@property (nonatomic, retain) NSString *account;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSData *genericData;
@property (nonatomic, retain) NSString *itemDescription;
@property (nonatomic, retain) NSString *label;
@property (getter=isSyncable, nonatomic) bool syncable;
@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, retain) NSData *valueData;
@property (nonatomic, retain) NSString *viewHint;

- (id)initWithPairingIdentity:(id)arg1;

@end
