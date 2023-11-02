
@interface _SFContextualNamedEntitySource : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _fromDate;
    long long  _limit;
    NSSet * _sourceApplications;
    NSDate * _toDate;
}

@property (nonatomic, readonly, copy) NSDate *fromDate;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly, copy) NSSet *sourceApplications;
@property (nonatomic, readonly, copy) NSDate *toDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceApplications:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 limit:(long long)arg4;
- (long long)limit;
- (id)sourceApplications;
- (id)toDate;

@end
