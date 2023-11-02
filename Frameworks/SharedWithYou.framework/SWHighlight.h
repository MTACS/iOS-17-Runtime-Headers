
@interface SWHighlight : NSObject <NSCopying, NSSecureCoding> {
    <NSSecureCoding><NSCopying> * _identifier;
    SLHighlight * _slHighlight;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) <NSSecureCoding><NSCopying> *identifier;
@property (setter=_setSLHighlight:, nonatomic, retain) SLHighlight *slHighlight;

+ (unsigned char)highlightContentTypeForType:(unsigned char)arg1;
+ (id)highlightsForSLHighlights:(id)arg1;
+ (id)requiredSpotlightAttributeKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)_setSLHighlight:(id)arg1;
- (id)attributions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hideContextMenu;
- (id)identifier;
- (id)initWithCSSearchableItem:(id)arg1 error:(id*)arg2;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)arg1 forType:(unsigned char)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSLHighlight:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocalResource;
- (bool)isSyndicatableMedia;
- (id)livePhotoComplementURL;
- (id)replyContextMenuWithPresentingViewController:(id)arg1;
- (id)resourceUTI;
- (id)slHighlight;
- (id)stringIdentifier;
- (id)timestamp;

@end
