
@interface LNValue : NSObject <NSSecureCoding> {
    LNDisplayRepresentation * _displayRepresentation;
    id  _value;
    LNValueType * _valueType;
}

@property (nonatomic, readonly, copy) NSString *cat_definitionXML;
@property (nonatomic, readonly, copy) NSString *cat_parameterName;
@property (nonatomic, readonly, copy) NSString *cat_variableXML;
@property (nonatomic, copy) LNDisplayRepresentation *displayRepresentation;
@property (nonatomic, readonly, copy) id value;
@property (nonatomic, readonly, copy) LNValueType *valueType;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)displayRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 valueType:(id)arg2;
- (id)initWithValue:(id)arg1 valueType:(id)arg2 displayRepresentation:(id)arg3;
- (id)initWithValues:(id)arg1 memberValueType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDisplayRepresentation:(id)arg1;
- (id)value;
- (id)valueType;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)cat_definitionXML;
- (id)cat_parameterName;
- (id)cat_variableXML;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)valueFromSerializedRepresentation:(id)arg1 valueType:(id)arg2 variableProvider:(id)arg3 parameter:(id)arg4;
+ (id)valueFromSerializedRepresentation:(id)arg1 valueType:(id)arg2 variableProvider:(id)arg3 parameter:(id)arg4 bundleIdentifier:(id)arg5;

- (id)wfSerializedRepresentation;

@end
