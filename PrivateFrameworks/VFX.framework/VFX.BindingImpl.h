
@interface VFX.BindingImpl : _TtCs12_SwiftObject <VFX.VFXBinding> {
    void bindingName;
    void entityManager;
    void enumCases;
    void enumName;
    void identifier;
    void isPublic;
    void max;
    void min;
    void objectID;
    void objectName;
    void property;
    void semantic;
    void type;
    void userManual;
}

@property (nonatomic, copy) NSString *bindingName;
@property (nonatomic, copy) NSArray *enumCases;
@property (nonatomic, copy) NSString *enumName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) long long objectID;
@property (nonatomic, copy) NSString *objectName;
@property (nonatomic, copy) NSData *rawValue;
@property (nonatomic) long long semantic;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *userManual;

- (id)bindingName;
- (id)enumCases;
- (id)enumName;
- (id)identifier;
- (double)max;
- (double)min;
- (long long)objectID;
- (id)objectName;
- (id)rawValue;
- (long long)semantic;
- (void)setBindingName:(id)arg1;
- (void)setEnumCases:(id)arg1;
- (void)setEnumName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setObjectID:(long long)arg1;
- (void)setObjectName:(id)arg1;
- (void)setRawValue:(id)arg1;
- (void)setSemantic:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUserManual:(id)arg1;
- (long long)type;
- (id)userManual;

@end
