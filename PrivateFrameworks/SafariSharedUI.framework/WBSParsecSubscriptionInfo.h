
@interface WBSParsecSubscriptionInfo : NSObject {
    NSDate * _expirationDate;
    NSString * _type;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)expirationDate;
- (id)initWithString:(id)arg1;
- (bool)isExpired;
- (id)type;

@end
