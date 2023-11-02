
@interface AFLocationSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    long long  _accessState;
    NSNumber * _altitude;
    NSNumber * _direction;
    NSNumber * _horizontalAccuracy;
    NSNumber * _latitude;
    NSNumber * _longitude;
    bool  _preciseLocationEnabled;
    NSNumber * _speed;
    NSNumber * _verticalAccuracy;
}

@property (nonatomic, readonly) long long accessState;
@property (nonatomic, readonly, copy) NSNumber *altitude;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *horizontalAccuracy;
@property (nonatomic, readonly, copy) NSNumber *latitude;
@property (nonatomic, readonly, copy) NSNumber *longitude;
@property (nonatomic, readonly) bool preciseLocationEnabled;
@property (nonatomic, readonly, copy) NSNumber *speed;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *verticalAccuracy;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (long long)accessState;
- (id)ace_setRequestOrigin;
- (id)ad_shortDescription;
- (id)altitude;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)direction;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)horizontalAccuracy;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 altitude:(id)arg3 direction:(id)arg4 speed:(id)arg5 verticalAccuracy:(id)arg6 horizontalAccuracy:(id)arg7 preciseLocationEnabled:(bool)arg8 accessState:(long long)arg9;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)initWithSetRequestOrigin:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latitude;
- (id)longitude;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (bool)preciseLocationEnabled;
- (id)serializedBackingStore;
- (id)speed;
- (id)verticalAccuracy;

@end
