
@interface MCMCodeSigningEntry : NSObject {
    bool  _advanceCopy;
    NSArray * _childBundleIdentifiers;
    NSDictionary * _codeSigningInfo;
    unsigned long long  _dataContainerClass;
    bool  _invalid;
    bool  _placeholder;
    bool  _registeredByCaller;
    bool  _registeredByKernel;
}

@property (getter=isAdvanceCopy, nonatomic) bool advanceCopy;
@property (nonatomic, retain) NSArray *childBundleIdentifiers;
@property (nonatomic, retain) NSDictionary *codeSigningInfo;
@property (nonatomic) unsigned long long dataContainerClass;
@property (getter=isInvalid, nonatomic) bool invalid;
@property (getter=isPlaceholder, nonatomic) bool placeholder;
@property (getter=isRegisteredByCaller, nonatomic) bool registeredByCaller;
@property (getter=isRegisteredByKernel, nonatomic) bool registeredByKernel;

- (void).cxx_destruct;
- (id)childBundleIdentifiers;
- (id)codeSigningInfo;
- (unsigned long long)dataContainerClass;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCodeSigningInfo:(id)arg1;
- (id)initWithCodeSigningInfo:(id)arg1 andDataContainerClass:(unsigned long long)arg2;
- (id)initWithSerializedDictionary:(id)arg1;
- (bool)isAdvanceCopy;
- (bool)isEqual:(id)arg1;
- (bool)isInvalid;
- (bool)isPlaceholder;
- (bool)isRegisteredByCaller;
- (bool)isRegisteredByKernel;
- (id)serialize;
- (void)setAdvanceCopy:(bool)arg1;
- (void)setChildBundleIdentifiers:(id)arg1;
- (void)setCodeSigningInfo:(id)arg1;
- (void)setDataContainerClass:(unsigned long long)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setRegisteredByCaller:(bool)arg1;
- (void)setRegisteredByKernel:(bool)arg1;

@end
