
@interface FIAPResult : NSObject <NSSecureCoding> {
    NSError * _error;
    NSArray * _historicalDataRequests;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *historicalDataRequests;

+ (id)new;
+ (id)resultWithHistoricalDataRequests:(id)arg1 error:(id)arg2;
+ (id)success;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)historicalDataRequests;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistoricalDataRequests:(id)arg1 error:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResult:(id)arg1;

@end
