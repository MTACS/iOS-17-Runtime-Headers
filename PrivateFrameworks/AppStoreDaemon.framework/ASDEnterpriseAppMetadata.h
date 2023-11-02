
@interface ASDEnterpriseAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {
    bool  _hideUserPrompts;
    NSURL * _manifestURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool hideUserPrompts;
@property (readonly) NSURL *manifestURL;
@property (readonly) long long metadataType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hideUserPrompts;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifestURL:(id)arg1;
- (id)manifestURL;
- (long long)metadataType;
- (void)setHideUserPrompts:(bool)arg1;

@end
