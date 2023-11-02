
@interface PGTitle : NSObject {
    long long  _category;
    NSString * _stringValue;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *stringValue;

+ (id)titleWithString:(id)arg1 category:(long long)arg2;

- (void).cxx_destruct;
- (long long)category;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)stringValue;

@end
