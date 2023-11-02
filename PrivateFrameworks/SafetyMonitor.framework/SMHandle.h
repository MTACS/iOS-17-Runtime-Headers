
@interface SMHandle : NSObject <NSSecureCoding> {
    NSString * _primaryHandle;
    NSArray * _secondaryHandles;
}

@property (nonatomic, readonly) NSString *primaryHandle;
@property (nonatomic, readonly) NSArray *secondaryHandles;

+ (long long)getSMHandleTypeWithHandle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEqualPrimaryHandle:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPrimaryHandle:(id)arg1 secondaryHandles:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)outputToDictionary;
- (id)primaryHandle;
- (id)secondaryHandles;

@end
