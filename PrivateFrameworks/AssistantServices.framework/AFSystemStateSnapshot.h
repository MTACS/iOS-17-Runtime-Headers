
@interface AFSystemStateSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    long long  _sleepState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sleepState;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)initWithSleepState:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)serializedBackingStore;
- (long long)sleepState;

@end
