
@interface _REMChangedObjectIDStorage : NSObject <NSCopying, NSSecureCoding, REMChangedObjectIdentifying> {
    NSString * _entityName;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *entityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 entityName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
