
@interface SOTimersSnapshot : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSDictionary * _timersByID;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSDictionary *timersByID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 timersByID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)timersByID;

@end
