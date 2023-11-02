
@interface HMBLocalSQLContextRowQuery : HMFObject {
    unsigned long long  _recordRow;
    NSDictionary * _tuples;
}

@property (nonatomic, readonly) unsigned long long recordRow;
@property (nonatomic, readonly) NSDictionary *tuples;

- (void).cxx_destruct;
- (id)initWithRecordRow:(unsigned long long)arg1 tuples:(id)arg2;
- (unsigned long long)recordRow;
- (id)tuples;

@end
