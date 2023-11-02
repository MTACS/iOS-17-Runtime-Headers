
@interface WFLinkEnumerationContentItem : WFContentItem <WFContentItemClass> {
    LNEnumCaseMetadata * _enumCaseMetadata;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFLinkEnumerationCase *enumCase;
@property (nonatomic, retain) LNEnumCaseMetadata *enumCaseMetadata;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)appBundleIdentifier;
+ (id)enumMetadata;
+ (id)localizedCountDescriptionWithValue:(long long)arg1;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (bool)supportsSecureCoding;
+ (id)typeDescription;

- (void).cxx_destruct;
- (Class)classForCoder;
- (Class)classForCopying;
- (Class)classForKeyedArchiver;
- (void)encodeWithCoder:(id)arg1;
- (id)enumCase;
- (id)enumCaseMetadata;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setEnumCaseMetadata:(id)arg1;

@end
