
@interface PKCacheScoreItem : NSObject <NSSecureCoding> {
    NSDate * _insertDate;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasExpired;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isNewerThan:(id)arg1;

@end
