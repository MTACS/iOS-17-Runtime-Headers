
@interface ATXSuggestionSearchResult : SFSearchResult <NSCopying, NSSecureCoding> {
    NSUUID * _blendingModelUICacheUpdateUUID;
    ATXContextActionIdentifier * _contextActionIdentifier;
    ATXProactiveSuggestion * _proactiveSuggestion;
}

@property (nonatomic, readonly) NSUUID *blendingModelUICacheUpdateUUID;
@property (nonatomic, readonly) ATXContextActionIdentifier *contextActionIdentifier;
@property (nonatomic, readonly) ATXProactiveSuggestion *proactiveSuggestion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingModelUICacheUpdateUUID;
- (id)contextActionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)proactiveSuggestion;
- (void)setBlendingModelUICacheUpdateUUID:(id)arg1;
- (void)setContextActionIdentifier:(id)arg1;
- (void)setProactiveSuggestion:(id)arg1;

@end
