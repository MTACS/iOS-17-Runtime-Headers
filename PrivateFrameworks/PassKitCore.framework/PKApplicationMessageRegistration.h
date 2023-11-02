
@interface PKApplicationMessageRegistration : NSObject <NSCopying, NSSecureCoding> {
    bool  _badge;
    NSDate * _createdDate;
    PKApplicationMessageKey * _key;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) bool badge;
@property (nonatomic, readonly) NSDate *createdDate;
@property (nonatomic, readonly) PKApplicationMessageKey *key;
@property (nonatomic, readonly) unsigned long long priority;

+ (id)createWithKey:(id)arg1 createdDate:(id)arg2 priority:(unsigned long long)arg3 badge:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)badge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (unsigned long long)priority;

@end
