
@interface HKConceptAttribute : NSObject <NSCopying, NSSecureCoding> {
    bool  _deleted;
    NSString * _stringValue;
    long long  _type;
    long long  _version;
}

@property (nonatomic, readonly) bool boolValue;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) long long longLongValue;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 boolValue:(bool)arg2;
- (id)initWithType:(long long)arg1 numberValue:(id)arg2;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(long long)arg1 value:(id)arg2 version:(long long)arg3 deleted:(bool)arg4;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (long long)longLongValue;
- (id)numberValue;
- (id)stringValue;
- (long long)type;
- (long long)version;

@end
