
@interface ISIconDecoration : NSObject <ISIconDecoration, ISIconDecorationInternal, NSCopying> {
    NSString * _identifier;
    unsigned long long  _identifierKind;
    long long  _mode;
    long long  _position;
    NSUUID * _resourceToken;
    NSURL * _resourceURL;
}

@property (readonly) <ISScalableCompositorResource> *compositorResource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long identifierKind;
@property long long mode;
@property long long position;
@property (readonly) NSUUID *resourceToken;
@property (readonly) NSURL *resourceURL;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compositorResource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (unsigned long long)identifierKind;
- (id)imageForDescriptor:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(unsigned long long)arg1 identifier:(id)arg2;
- (id)initWithResourceURL:(id)arg1;
- (id)initWithType:(id)arg1;
- (long long)mode;
- (long long)position;
- (void)prepareImagesForDescriptors:(id)arg1;
- (id)resourceFingerprint;
- (id)resourceToken;
- (id)resourceURL;
- (void)setMode:(long long)arg1;
- (void)setPosition:(long long)arg1;
- (id)uuid;

@end
