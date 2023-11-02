
@interface PRPosterSuggestionMetadata : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding, PRPosterRoleAttribute> {
    NSDate * _lastModifiedDate;
    NSDictionary * _suggestedComplicationsByIdentifier;
    ATXFaceGalleryItem * _suggestedGalleryItem;
}

@property (nonatomic, readonly) NSString *attributeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSDictionary *suggestedComplicationsByIdentifier;
@property (nonatomic, readonly) ATXFaceGalleryItem *suggestedGalleryItem;
@property (readonly) Class superclass;

+ (id)decodeObjectWithJSON:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)attributeType;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeJSON;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastModifiedDate:(id)arg1;
- (id)initWithSuggestedGalleryItem:(id)arg1 suggestedComplicationsByIdentifier:(id)arg2 lastModifiedDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedDate;
- (id)metadataBySettingLastModifiedDateToNow;
- (id)suggestedComplicationsByIdentifier;
- (id)suggestedGalleryItem;

@end
