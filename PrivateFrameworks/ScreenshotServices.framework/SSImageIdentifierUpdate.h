
@interface SSImageIdentifierUpdate : NSObject <BSXPCSecureCoding, SSLoggable> {
    NSString * _environmentDescriptionIdentifier;
    NSString * _imageIdentifier;
    bool  _success;
}

@property (nonatomic, readonly) BSSettings *bsSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *environmentDescriptionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *imageIdentifier;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)bsSettings;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)environmentDescriptionIdentifier;
- (id)imageIdentifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)loggableDescription;
- (void)setEnvironmentDescriptionIdentifier:(id)arg1;
- (void)setImageIdentifier:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
