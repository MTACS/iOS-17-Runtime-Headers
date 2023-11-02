
@protocol HKSPObject <NSObject, NSSecureCoding, NSCopying, NSMutableCopying>

@required

+ (NSSet *)allProperties;
+ (NSSet *)propertiesForEquivalence;

- (id)initFromObject:(id <HKSPObject>)arg1;
- (bool)isEquivalentTo:(id <HKSPObject>)arg1;
- (<HKSPMutableObject> *)mutableCopy;
- (unsigned long long)version;

@optional

+ (NSSet *)significantProperties;

- (NSDate *)lastModifiedDate;

@end
