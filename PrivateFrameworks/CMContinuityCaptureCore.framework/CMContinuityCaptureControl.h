
@interface CMContinuityCaptureControl : NSObject <CMContinuityCaptureDictionaryRepresentable, NSCopying, NSSecureCoding> {
    NSDictionary * _attributes;
    NSString * _class;
    long long  _entity;
    struct { 
        long long major; 
        long long minor; 
        long long patch; 
    }  _minimumSupportedVersion;
    NSString * _name;
    id  _value;
}

@property (nonatomic, readonly, retain) NSDictionary *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } minimumSupportedVersion;
@property (nonatomic, readonly, retain) NSString *name;
@property (readonly) Class superclass;
@property (retain) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)entity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(id)arg2 entity:(long long)arg3 minimumSupportedVersion:(struct { long long x1; long long x2; long long x3; })arg4 value:(id)arg5;
- (struct { long long x1; long long x2; long long x3; })minimumSupportedVersion;
- (id)name;
- (void)setValue:(id)arg1;
- (id)value;

@end
