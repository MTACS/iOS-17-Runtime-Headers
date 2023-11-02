
@interface SSEnvironmentElementDocumentUpdate : NSObject <BSXPCSecureCoding, SSLoggable> {
    SSHarvestedApplicationDocument * _document;
    NSString * _environmentElementIdentifier;
}

@property (nonatomic, readonly) BSSettings *bsSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SSHarvestedApplicationDocument *document;
@property (nonatomic, copy) NSString *environmentElementIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)bsSettings;
- (id)document;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)environmentElementIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)loggableDescription;
- (void)setDocument:(id)arg1;
- (void)setEnvironmentElementIdentifier:(id)arg1;

@end
