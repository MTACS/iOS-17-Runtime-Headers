
@interface HMBLocalSQLContextRowQueryTuple : HMFObject {
    NSData * _queryData;
    unsigned long long  _queryRow;
}

@property (nonatomic, readonly) NSData *queryData;
@property (nonatomic, readonly) unsigned long long queryRow;

- (void).cxx_destruct;
- (id)initWithQueryRow:(unsigned long long)arg1 data:(id)arg2;
- (id)queryData;
- (unsigned long long)queryRow;

@end
