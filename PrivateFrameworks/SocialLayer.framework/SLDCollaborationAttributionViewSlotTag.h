
@interface SLDCollaborationAttributionViewSlotTag : SLDSlotTag <NSCopying, NSSecureCoding> {
    NSArray * _collaboratorDisplayNames;
    NSArray * _conversationDrawingMetadata;
    bool  _isPlaceholder;
    double  _maxWidth;
    SLDImageSymbolConfiguration * _placeholderGlyphConfiguration;
    NSString * _title;
    long long  _variant;
    NSNumber * _widthNumber;
}

@property (nonatomic, retain) NSArray *collaboratorDisplayNames;
@property (nonatomic, retain) NSArray *conversationDrawingMetadata;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic) double maxWidth;
@property (nonatomic, retain) SLDImageSymbolConfiguration *placeholderGlyphConfiguration;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long variant;
@property (nonatomic, retain) NSNumber *widthNumber;

+ (id)_personOtherThanPerson:(id)arg1 inArray:(id)arg2;
+ (id)conversationDrawingMetadataForAttributions:(id)arg1;
+ (id)displayNamesForPersons:(id)arg1;
+ (id)placeholderTagForMaxWidth:(double)arg1 placeholderGlyphConfiguration:(id)arg2;
+ (id)recipientsForAttribution:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)tagForTitle:(id)arg1 attributions:(id)arg2 placeholderGlyphConfiguration:(id)arg3 maxWidth:(double)arg4 variant:(long long)arg5;

- (void).cxx_destruct;
- (id)collaboratorDisplayNames;
- (id)conversationDrawingMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 attributions:(id)arg2 placeholderGlyphConfiguration:(id)arg3 maxWidth:(double)arg4 variant:(long long)arg5 isPlaceholder:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (double)maxWidth;
- (id)placeholderGlyphConfiguration;
- (id)resolvedStyleForStyle:(id)arg1;
- (void)setCollaboratorDisplayNames:(id)arg1;
- (void)setConversationDrawingMetadata:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setPlaceholderGlyphConfiguration:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVariant:(long long)arg1;
- (void)setWidthNumber:(id)arg1;
- (id)title;
- (long long)variant;
- (id)widthNumber;

@end
