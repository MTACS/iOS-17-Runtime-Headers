
@interface TMLMethodDescriptor : NSObject <TMLModelSerialize> {
    NSString * _methodName;
    NSString * _methodSelector;
    bool  _optional;
    NSArray * _parameters;
    unsigned long long  _returnType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic, readonly) NSString *methodSelector;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) unsigned long long returnType;
@property (readonly) Class superclass;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;
+ (id)methodSelectorForMethodName:(id)arg1 parameters:(id)arg2;

- (void).cxx_destruct;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;
- (id)initWithName:(id)arg1 returnType:(unsigned long long)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isOptional;
- (id)methodName;
- (id)methodSelector;
- (id)parameters;
- (unsigned long long)returnType;

@end