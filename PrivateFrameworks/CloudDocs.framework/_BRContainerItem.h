
@interface _BRContainerItem : BRQueryItem <NSCopying, NSSecureCoding> {
    NSSet * _containerClientIDs;
    NSString * _containerID;
    NSString * _displayName;
    bool  _isPristine;
    NSString * _localizedName;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)containerDisplayName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (id)fp_cloudContainerClientBundleIdentifiers;
- (id)fp_cloudContainerIdentifier;
- (bool)fp_isContainer;
- (bool)fp_isContainerPristine;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3;
- (bool)isHidden;
- (id)itemIdentifier;
- (id)parentItemIdentifier;
- (bool)respondsToSelector:(SEL)arg1;
- (id)subclassDescription;
- (id)typeIdentifier;

@end
