
@interface SFCoreSpotlightButtonItem : SFButtonItem <NSCopying, NSSecureCoding, SFCoreSpotlightButtonItem> {
    NSArray * _actionItemTypes;
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
}

@property (nonatomic, copy) NSArray *actionItemTypes;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uniqueId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionItemTypes;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setActionItemTypes:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;

@end
