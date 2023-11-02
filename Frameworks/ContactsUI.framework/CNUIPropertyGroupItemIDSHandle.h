
@interface CNUIPropertyGroupItemIDSHandle : NSObject <CNUIIDSHandle> {
    CNContactProperty * _contactProperty;
    CNUIContactPropertyIDSHandle * _contactPropertyHandle;
}

@property (nonatomic, readonly, copy) NSString *_cnui_IDSIDRepresentation;
@property (nonatomic, readonly, copy) CNContactProperty *contactProperty;
@property (nonatomic, readonly) CNUIContactPropertyIDSHandle *contactPropertyHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupportedGroupItem:(id)arg1;
+ (bool)supportsPropertyGroupItem:(id)arg1;

- (void).cxx_destruct;
- (id)_cnui_IDSIDRepresentation;
- (id)contactProperty;
- (id)contactPropertyHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPropertyGroupItem:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
