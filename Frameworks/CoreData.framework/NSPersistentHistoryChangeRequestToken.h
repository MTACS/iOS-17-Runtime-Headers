
@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding> {
    NSDate * _date;
    bool  _delete;
    unsigned long long  _fetchBatchSize;
    NSData * _fetchData;
    unsigned long long  _fetchLimit;
    unsigned long long  _fetchOffset;
    unsigned long long  _percentageOfDB;
    long long  _resultType;
    NSDictionary * _token;
    bool  _transactionFromToken;
}

@property (nonatomic, readonly, retain) NSDate *date;
@property (nonatomic, readonly) bool delete;
@property (nonatomic, readonly) unsigned long long fetchBatchSize;
@property (nonatomic, readonly, retain) NSData *fetchData;
@property (nonatomic, readonly) unsigned long long fetchLimit;
@property (nonatomic, readonly) unsigned long long fetchOffset;
@property (nonatomic, readonly) unsigned long long percentageOfDB;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly, retain) NSDictionary *token;
@property (nonatomic, readonly) bool transactionFromToken;

+ (bool)supportsSecureCoding;

- (id)date;
- (void)dealloc;
- (bool)delete;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fetchBatchSize;
- (id)fetchData;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)percentageOfDB;
- (long long)resultType;
- (id)token;
- (bool)transactionFromToken;

@end
