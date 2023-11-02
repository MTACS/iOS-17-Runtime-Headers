
@interface _SFContextualRankedContactSource : NSObject <NSCopying, NSSecureCoding> {
    bool  _contactOnly;
    long long  _limit;
    NSDate * _rankDate;
    NSString * _sourceApplication;
}

@property (nonatomic, readonly) bool contactOnly;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly, copy) NSDate *rankDate;
@property (nonatomic, readonly, copy) NSString *sourceApplication;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)contactOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceApplication:(id)arg1 rankDate:(id)arg2 contactOnly:(bool)arg3 limit:(long long)arg4;
- (long long)limit;
- (id)rankDate;
- (id)sourceApplication;

@end
