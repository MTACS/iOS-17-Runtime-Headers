
@interface FBKAttachmentDescriptor : NSObject <NSSecureCoding> {
    NSString * _diagnosticExtensionIdentifier;
    NSString * _localizedDescription;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *diagnosticExtensionIdentifier;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)diagnosticExtensionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescription:(id)arg1 URL:(id)arg2;
- (id)initWithDescription:(id)arg1 diagnosticExtensionIdentifier:(id)arg2;
- (id)localizedDescription;
- (void)setDiagnosticExtensionIdentifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
