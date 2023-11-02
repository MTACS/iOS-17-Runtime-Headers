
@interface _CDSpotlightCachedContact : NSObject {
    CNContact * _contact;
    NSDate * _expirationDate;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, copy) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)contact;
- (id)expirationDate;
- (id)initWithExpirationDate:(id)arg1 contact:(id)arg2;
- (void)setExpirationDate:(id)arg1;

@end
