
@interface LNAction : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _mangledTypeName;
    bool  _openAppWhenRun;
    NSNumber * _outputFlags;
    LNValueType * _outputType;
    NSArray * _parameters;
    NSArray * _systemProtocols;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *mangledTypeName;
@property (nonatomic, readonly) bool openAppWhenRun;
@property (nonatomic, readonly) NSNumber *outputFlags;
@property (nonatomic, readonly) LNValueType *outputType;
@property (nonatomic, readonly, copy) NSArray *parameters;
@property (nonatomic, readonly) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *systemProtocols;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionWithOpenWhenRun:(bool)arg1;
- (id)actionWithParameters:(id)arg1;
- (id)actionWithPresentationStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateParameterValuesOfValueType:(id)arg1 block:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 openAppWhenRun:(bool)arg3 outputFlags:(id)arg4 outputType:(id)arg5 parameters:(id)arg6;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 openAppWhenRun:(bool)arg3 outputFlags:(id)arg4 outputType:(id)arg5 systemProtocols:(id)arg6 parameters:(id)arg7;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 openAppWhenRun:(bool)arg3 parameters:(id)arg4;
- (id)initWithIdentifier:(id)arg1 mangledTypeName:(id)arg2 presentationStyle:(long long)arg3 parameters:(id)arg4;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithIdentifier:(id)arg1 presentationStyle:(long long)arg2 parameters:(id)arg3;
- (id)initWithMetadata:(id)arg1 bundleIdentifier:(id)arg2 parameters:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mangledTypeName;
- (bool)openAppWhenRun;
- (id)outputFlags;
- (id)outputType;
- (id)parameters;
- (long long)presentationStyle;
- (id)systemProtocols;

@end
