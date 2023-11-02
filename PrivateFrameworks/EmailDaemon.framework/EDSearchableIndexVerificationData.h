
@interface EDSearchableIndexVerificationData : NSObject <NSCopying> {
    NSDate * _dateReceived;
    NSString * _deleted;
    NSNumber * _flags;
    NSNumber * _indexedAsEmptySubject;
    NSString * _subject;
    NSArray * _toEmailAddresses;
    NSNumber * _transactionID;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSDate *dateReceived;
@property (nonatomic, copy) NSString *deleted;
@property (nonatomic, retain) NSNumber *flags;
@property (nonatomic, retain) NSNumber *indexedAsEmptySubject;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *toEmailAddresses;
@property (nonatomic, retain) NSNumber *transactionID;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)deleted;
- (id)flags;
- (id)indexedAsEmptySubject;
- (void)setDateReceived:(id)arg1;
- (void)setDeleted:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setIndexedAsEmptySubject:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setToEmailAddresses:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)subject;
- (id)toEmailAddresses;
- (id)transactionID;
- (id)userInfo;

@end
