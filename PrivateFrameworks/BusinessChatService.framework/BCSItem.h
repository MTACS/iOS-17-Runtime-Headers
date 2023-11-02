
@interface BCSItem : NSObject <BCSExpiring, BCSItemIdentifying> {
    NSDate * _expirationDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *itemIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long truncatedHash;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)init;
- (bool)isExpired;
- (id)itemIdentifier;
- (bool)matchesItemIdentifying:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (long long)truncatedHash;
- (long long)type;

@end
