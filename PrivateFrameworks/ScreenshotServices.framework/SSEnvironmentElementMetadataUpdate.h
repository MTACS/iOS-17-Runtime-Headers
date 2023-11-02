
@interface SSEnvironmentElementMetadataUpdate : NSObject <BSXPCSecureCoding, SSLoggable> {
    NSString * _environmentElementIdentifier;
    SSHarvestedApplicationMetadata * _metadata;
}

@property (nonatomic, readonly) BSSettings *bsSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *environmentElementIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (nonatomic, retain) SSHarvestedApplicationMetadata *metadata;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)bsSettings;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)environmentElementIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)loggableDescription;
- (id)metadata;
- (void)setEnvironmentElementIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
