
@interface LNSymbolImage : LNImage {
    NSData * _configurationData;
    NSString * _platform;
    LNSymbolConfiguration * _platformAgnosticSymbolConfiguration;
    NSString * _systemName;
    NSData * _tintColorData;
}

@property (nonatomic, readonly) NSData *configurationData;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) LNSymbolConfiguration *platformAgnosticSymbolConfiguration;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSData *tintColorData;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolSystemName:(id)arg1;
- (id)initWithSymbolSystemName:(id)arg1 tintColorData:(id)arg2 configurationData:(id)arg3 platform:(id)arg4;
- (id)initWithSymbolSystemName:(id)arg1 tintColorData:(id)arg2 platformAgnosticConfiguration:(id)arg3 platform:(id)arg4;
- (id)platform;
- (id)platformAgnosticSymbolConfiguration;
- (id)proxiedImageCopy;
- (id)systemName;
- (id)tintColorData;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)serializedRepresentation;

@end
