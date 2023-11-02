
@interface LNActionParameterMetadata : NSObject <NSSecureCoding> {
    long long  _dynamicOptionsSupport;
    long long  _inputConnectionBehavior;
    NSString * _name;
    bool  _optional;
    LNStaticDeferredLocalizedString * _parameterDescription;
    NSArray * _resolvableInputTypes;
    LNStaticDeferredLocalizedString * _title;
    NSDictionary * _typeSpecificMetadata;
    LNValueType * _valueType;
}

@property (nonatomic, readonly) long long dynamicOptionsSupport;
@property (nonatomic, readonly) bool hasDynamicOptions;
@property (nonatomic, readonly) long long inputConnectionBehavior;
@property (nonatomic, readonly) bool isInput;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *parameterDescription;
@property (nonatomic, readonly, copy) NSArray *resolvableInputTypes;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;
@property (nonatomic, readonly, copy) NSDictionary *typeSpecificMetadata;
@property (nonatomic, readonly, copy) LNValueType *valueType;
@property (nonatomic, readonly) NSString *wf_localizedDescription;
@property (nonatomic, readonly) NSString *wf_localizedTitle;
@property (nonatomic, readonly) WFLinkActionParameterDefinition *wf_parameterDefinition;
@property (nonatomic, readonly) NSDictionary *wf_parameterDictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (long long)dynamicOptionsSupport;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDynamicOptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 valueType:(id)arg2 optional:(bool)arg3 title:(id)arg4 description:(id)arg5 resolvableInputTypes:(id)arg6 typeSpecificMetadata:(id)arg7;
- (id)initWithName:(id)arg1 valueType:(id)arg2 optional:(bool)arg3 title:(id)arg4 description:(id)arg5 resolvableInputTypes:(id)arg6 typeSpecificMetadata:(id)arg7 dynamicOptionsSupport:(long long)arg8 inputConnectionBehavior:(long long)arg9;
- (id)initWithName:(id)arg1 valueType:(id)arg2 optional:(bool)arg3 title:(id)arg4 description:(id)arg5 resolvableInputTypes:(id)arg6 typeSpecificMetadata:(id)arg7 dynamicOptionsSupport:(long long)arg8 isInput:(bool)arg9;
- (id)initWithName:(id)arg1 valueType:(id)arg2 optional:(bool)arg3 title:(id)arg4 resolvableInputTypes:(id)arg5 typeSpecificMetadata:(id)arg6;
- (id)initWithName:(id)arg1 valueType:(id)arg2 optional:(bool)arg3 title:(id)arg4 resolvableInputTypes:(id)arg5 typeSpecificMetadata:(id)arg6 dynamicOptionsSupport:(long long)arg7;
- (id)initWithName:(id)arg1 valueType:(id)arg2 optional:(bool)arg3 title:(id)arg4 resolvableInputTypes:(id)arg5 typeSpecificMetadata:(id)arg6 dynamicOptionsSupport:(long long)arg7 isInput:(bool)arg8;
- (id)initWithName:(id)arg1 valueType:(id)arg2 optional:(bool)arg3 title:(id)arg4 resolvableInputTypes:(id)arg5 typeSpecificMetadata:(id)arg6 hasDynamicOptions:(bool)arg7;
- (long long)inputConnectionBehavior;
- (bool)isEqual:(id)arg1;
- (bool)isInput;
- (bool)isOptional;
- (id)name;
- (id)parameterDescription;
- (id)resolvableInputTypes;
- (id)title;
- (id)typeSpecificMetadata;
- (id)valueType;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_localizedDescription;
- (id)wf_localizedTitle;
- (id)wf_parameterDefinition;
- (id)wf_parameterDictionaryRepresentation;
- (id)wf_parameterMetadataWithTypeSpecificMetadata:(id)arg1;
- (bool)wf_validateParameterValue:(id)arg1 error:(id*)arg2;

@end
