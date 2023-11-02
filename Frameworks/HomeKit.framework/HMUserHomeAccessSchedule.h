
@interface HMUserHomeAccessSchedule : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _rules;
}

@property (getter=isAccessCurrentlyAllowed, readonly) bool accessCurrentlyAllowed;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpired, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (copy) NSArray *rules;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSDate *validFrom;
@property (readonly) NSDate *validThrough;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAccessCurrentlyAllowed;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (id)rules;
- (void)setRules:(id)arg1;
- (id)shortDescription;
- (id)validFrom;
- (id)validThrough;

@end
