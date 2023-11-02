
@interface CLMiLoServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _locationTypes;
    NSUUID * _serviceIdentifier;
    unsigned long long  _serviceType;
}

@property (nonatomic, readonly) NSArray *locationTypes;
@property (nonatomic, readonly) NSUUID *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long serviceType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 serviceType:(unsigned long long)arg2 locationTypes:(id)arg3;
- (id)locationTypes;
- (id)serviceIdentifier;
- (unsigned long long)serviceType;

@end
