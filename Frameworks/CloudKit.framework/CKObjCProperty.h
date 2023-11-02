
@interface CKObjCProperty : NSObject {
    Class  _classHandle;
    unsigned long long  _flags;
    NSMethodSignature * _getterMethodSignature;
    SEL  _getterSelector;
    NSString * _getterSelectorName;
    NSString * _instanceVariableName;
    NSString * _name;
    NSMethodSignature * _setterMethodSignature;
    SEL  _setterSelector;
    NSString * _setterSelectorName;
    CKObjCType * _type;
}

@property (nonatomic, readonly) SEL getterSelector;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SEL setterSelector;
@property (nonatomic, readonly) CKObjCType *type;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (SEL)getterSelector;
- (id)name;
- (SEL)setterSelector;
- (id)type;

@end
