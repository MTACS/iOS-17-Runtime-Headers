
@interface ASDSystemAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    bool  _userInitiated;
}

@property (copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long metadataType;
@property (readonly) Class superclass;
@property (getter=isUserInitiated) bool userInitiated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isUserInitiated;
- (long long)metadataType;
- (void)setBundleID:(id)arg1;
- (void)setUserInitiated:(bool)arg1;

@end
