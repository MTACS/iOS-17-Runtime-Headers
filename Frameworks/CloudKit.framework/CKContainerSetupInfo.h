
@interface CKContainerSetupInfo : NSObject <CKPropertiesDescription, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding> {
    CKContainerID * _containerID;
    CKContainerOptions * _containerOptions;
}

@property (nonatomic, readonly, copy) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic, readonly, copy) CKAccountOverrideInfo *accountOverrideInfo;
@property (nonatomic, readonly, copy) CKContainerID *containerID;
@property (nonatomic, readonly, copy) CKContainerOptions *containerOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (void)_stripAccountInfo;
- (id)accountInfoOverride;
- (id)accountOverrideInfo;
- (id)containerID;
- (id)containerOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutAccountInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hashString;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1 options:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)redactedDescription;

@end
