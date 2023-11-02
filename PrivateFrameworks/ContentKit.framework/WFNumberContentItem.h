
@interface WFNumberContentItem : WFContentItem <WFContentItemClass> {
    NSNumber * _maximumFractionDigitsForDisplay;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, retain) NSNumber *maximumFractionDigitsForDisplay;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithNumber:(id)arg1 maximumFractionDigitsForDisplay:(id)arg2;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (bool)supportsSecureCoding;
+ (id)typeDescription;

- (void).cxx_destruct;
- (void)copyStateToItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maximumFractionDigitsForDisplay;
- (id)number;
- (id)roundedName;
- (void)setMaximumFractionDigitsForDisplay:(id)arg1;

@end
