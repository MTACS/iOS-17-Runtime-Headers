
@interface SFResultEntity : NSObject <NSCopying, NSSecureCoding, SFResultEntity> {
    SFLocationTypeInfo * _location_type_info;
    NSString * _maps_encrypted_muid;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFLocationTypeInfo *location_type_info;
@property (nonatomic, copy) NSString *maps_encrypted_muid;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location_type_info;
- (id)maps_encrypted_muid;
- (id)name;
- (void)setLocation_type_info:(id)arg1;
- (void)setMaps_encrypted_muid:(id)arg1;
- (void)setName:(id)arg1;

@end
