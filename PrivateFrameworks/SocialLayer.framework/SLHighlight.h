
@interface SLHighlight : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _attributions;
    NSString * _identifier;
    bool  _isLocalResource;
    bool  _isSyndicatableMedia;
    NSURL * _livePhotoComplementURL;
    NSURL * _resolvedURL;
    NSURL * _resourceURL;
    NSString * _resourceUTI;
    NSNumber * _score;
    NSDictionary * _supplementaryData;
    unsigned long long  _syndicationType;
    NSDate * _timestamp;
}

@property (nonatomic, copy) NSArray *attributions;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isLocalResource;
@property (nonatomic, readonly) bool isSyndicatableMedia;
@property (nonatomic, readonly, copy) NSURL *livePhotoComplementURL;
@property (nonatomic, readonly, copy) NSURL *resolvedURL;
@property (nonatomic, readonly, copy) NSURL *resourceURL;
@property (nonatomic, readonly, copy) NSString *resourceUTI;
@property (nonatomic, readonly) NSNumber *score;
@property (nonatomic, readonly, copy) NSDictionary *supplementaryData;
@property (nonatomic, readonly) unsigned long long syndicationType;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (id)errorForHighlightDomain:(id)arg1 andCode:(long long)arg2 andUnderlyingError:(id*)arg3;
+ (id)requiredSpotlightAttributeKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_uniqueIdentifierForResourceURL:(id)arg1;
- (id)attributions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAttribution:(id)arg1;
- (id)initWithCSSearchableItem:(id)arg1;
- (id)initWithCSSearchableItem:(id)arg1 error:(id*)arg2;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)arg1 forContentType:(unsigned char)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPortraitHighlight:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLocalResource;
- (bool)isSyndicatableMedia;
- (id)livePhotoComplementURL;
- (id)portraitHighlight;
- (id)resolvedURL;
- (id)resourceURL;
- (id)resourceUTI;
- (id)score;
- (void)setAttributions:(id)arg1;
- (id)supplementaryData;
- (unsigned long long)syndicationType;
- (id)timestamp;

@end
