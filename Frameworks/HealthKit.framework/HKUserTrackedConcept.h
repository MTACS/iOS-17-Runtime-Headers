
@interface HKUserTrackedConcept : NSObject <NSCopying, NSSecureCoding> {
    HKUserTrackedConceptType * _userTrackedConceptType;
}

@property (nonatomic, readonly, copy) HKUserTrackedConceptType *userTrackedConceptType;

+ (id)_newUserTrackedConceptWithType:(id)arg1 config:(id /* block */)arg2;
+ (bool)isConcreteUserTrackedConceptClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)userTrackedConceptType;

@end
