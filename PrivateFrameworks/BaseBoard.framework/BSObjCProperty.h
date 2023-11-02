
@interface BSObjCProperty : NSObject <BSDescriptionProviding> {
    bool  _copy;
    NSString * _customGetter;
    NSString * _customSetter;
    BSObjCMethod * _getter;
    NSString * _name;
    bool  _nonatomic;
    bool  _readonly;
    bool  _required;
    BSObjCMethod * _setter;
    bool  _strong;
    BSObjCValue * _value;
    bool  _weak;
}

@property (getter=isAssign, nonatomic, readonly) bool assign;
@property (getter=isAtomic, nonatomic, readonly) bool atomic;
@property (getter=isCopy, nonatomic, readonly) bool copy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BSObjCMethod *getter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isNonAtomic, nonatomic, readonly) bool nonAtomic;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (getter=isReadWrite, nonatomic, readonly) bool readWrite;
@property (getter=isRequired, nonatomic, readonly) bool required;
@property (nonatomic, readonly) BSObjCMethod *setter;
@property (getter=isStrong, nonatomic, readonly) bool strong;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSObjCValue *value;
@property (getter=isWeak, nonatomic, readonly) bool weak;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)getter;
- (unsigned long long)hash;
- (bool)isAssign;
- (bool)isAtomic;
- (bool)isCopy;
- (bool)isEqual:(id)arg1;
- (bool)isNonAtomic;
- (bool)isReadOnly;
- (bool)isReadWrite;
- (bool)isRequired;
- (bool)isStrong;
- (bool)isWeak;
- (id)name;
- (id)setter;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)value;

@end
