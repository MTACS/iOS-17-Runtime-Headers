
@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _hash;
    NSSet * _parameters;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSSet *parameters;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOpaqueParameters;
- (id)initWithOpaqueParametersUuid:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initWithParameters:(id)arg1 uuid:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSlotSet:(id)arg1;
- (id)parameters;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
