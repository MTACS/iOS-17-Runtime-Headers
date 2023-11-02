
@interface _PSCachedContact : NSObject {
    CNContact * _contact;
    NSDate * _expirationDate;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly, copy) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)contact;
- (id)expirationDate;
- (id)initWithExpirationDate:(id)arg1 contact:(id)arg2;

@end
