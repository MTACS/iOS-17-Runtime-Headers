
@interface PTSerializationTypeInfo : NSObject {
    bool  _isAtomContainerType;
    bool  _isProviderArrayType;
    Class  _providerClass;
    unsigned int  _type;
}

@property bool isAtomContainerType;
@property bool isProviderArrayType;
@property (retain) Class providerClass;
@property unsigned int type;

- (void).cxx_destruct;
- (id)initWithType:(unsigned int)arg1 providerClass:(Class)arg2;
- (bool)isAtomContainerType;
- (bool)isProviderArrayType;
- (Class)providerClass;
- (void)setIsAtomContainerType:(bool)arg1;
- (void)setIsProviderArrayType:(bool)arg1;
- (void)setProviderClass:(Class)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
