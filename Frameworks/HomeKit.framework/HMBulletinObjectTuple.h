
@interface HMBulletinObjectTuple : NSObject {
    NSString * _queryName;
    NSString * _uuidString;
}

@property (nonatomic, readonly) NSString *queryName;
@property (nonatomic, readonly) NSString *uuidString;

+ (id)tupleWithQueryType:(long long)arg1 uuidString:(id)arg2;

- (void).cxx_destruct;
- (id)initWithQueryType:(long long)arg1 uuidString:(id)arg2;
- (id)queryName;
- (id)uuidString;

@end
