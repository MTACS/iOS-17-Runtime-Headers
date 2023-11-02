
@interface USOSerializedIdentifier : NSObject <NSSecureCoding> {
    NSString * _appBundleId;
    NSNumber * _groupIndex;
    NSNumber * _interpretationGroup;
    NSString * _namespaceString;
    unsigned long long  _nodeIndex;
    NSNumber * _probability;
    NSNumber * _sourceComponent;
    NSString * _value;
}

@property (readonly) NSString *appBundleId;
@property (readonly) NSNumber *groupIndex;
@property (readonly) NSNumber *interpretationGroup;
@property (readonly) NSString *namespaceString;
@property unsigned long long nodeIndex;
@property (readonly) NSNumber *probability;
@property (readonly) NSNumber *sourceComponent;
@property (readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleId;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIndex;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodeIndex:(unsigned long long)arg1 value:(id)arg2 appBundleId:(id)arg3 namespaceString:(id)arg4;
- (id)initWithNodeIndex:(unsigned long long)arg1 value:(id)arg2 appBundleId:(id)arg3 namespaceString:(id)arg4 probability:(id)arg5;
- (id)initWithNodeIndex:(unsigned long long)arg1 value:(id)arg2 appBundleId:(id)arg3 namespaceString:(id)arg4 probability:(id)arg5 sourceComponent:(id)arg6;
- (id)initWithNodeIndex:(unsigned long long)arg1 value:(id)arg2 appBundleId:(id)arg3 namespaceString:(id)arg4 probability:(id)arg5 sourceComponent:(id)arg6 groupIndex:(id)arg7;
- (id)initWithNodeIndex:(unsigned long long)arg1 value:(id)arg2 appBundleId:(id)arg3 namespaceString:(id)arg4 probability:(id)arg5 sourceComponent:(id)arg6 groupIndex:(id)arg7 interpretationGroup:(id)arg8;
- (id)interpretationGroup;
- (id)namespaceString;
- (unsigned long long)nodeIndex;
- (id)probability;
- (void)setNodeIndex:(unsigned long long)arg1;
- (id)sourceComponent;
- (id)value;

@end
