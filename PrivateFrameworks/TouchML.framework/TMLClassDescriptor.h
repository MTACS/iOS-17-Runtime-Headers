
@interface TMLClassDescriptor : NSObject <TMLModelSerialize> {
    NSMutableDictionary * _childClasses;
    NSString * _className;
    TMLValueExpression * _initializer;
    NSMutableDictionary * _methods;
    Class  _objcClass;
    NSString * _objcClassName;
    bool  _optional;
    NSMutableDictionary * _properties;
    NSMutableDictionary * _signals;
    TMLClassDescriptor * _superClass;
    NSString * _superClassName;
}

@property (nonatomic, readonly) NSDictionary *childClasses;
@property (nonatomic, readonly) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *inheritedMethods;
@property (nonatomic, readonly) NSDictionary *inheritedProperties;
@property (nonatomic, readonly) NSDictionary *inheritedSignals;
@property (nonatomic, readonly) TMLValueExpression *initializer;
@property (nonatomic, readonly) NSDictionary *methods;
@property (nonatomic, readonly) Class objcClass;
@property (nonatomic, copy) NSString *objcClassName;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSDictionary *signals;
@property (nonatomic, retain) TMLClassDescriptor *superClass;
@property (nonatomic, readonly) NSString *superClassName;
@property (readonly) Class superclass;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;

- (void).cxx_destruct;
- (void)addChildClass:(id)arg1;
- (void)addMethod:(id)arg1;
- (void)addProperty:(id)arg1;
- (void)addSignal:(id)arg1;
- (bool)canMergeFromClassDescriptor:(id)arg1;
- (id)childClasses;
- (id)className;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;
- (id)inheritedMethods;
- (id)inheritedProperties;
- (id)inheritedSignals;
- (id)initWithName:(id)arg1 superClassName:(id)arg2 initializer:(id)arg3 optional:(bool)arg4;
- (id)initializer;
- (bool)isEqual:(id)arg1;
- (bool)isOptional;
- (bool)mergeFromClassDescriptor:(id)arg1;
- (id)methods;
- (Class)objcClass;
- (id)objcClassName;
- (id)properties;
- (id)propertyForName:(id)arg1;
- (void)setObjcClassName:(id)arg1;
- (void)setSuperClass:(id)arg1;
- (id)signals;
- (id)superClass;
- (id)superClassName;

@end