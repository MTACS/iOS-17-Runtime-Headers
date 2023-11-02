
@interface SSCoreSuggestionsContactResultBuilder : SSContactResultBuilder {
    NSString * _suggestedContactIdentifier;
}

@property (nonatomic, retain) NSString *suggestedContactIdentifier;

+ (id)bundleId;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)buildBadgingImageWithThumbnail:(id)arg1;
- (id)buildCommand;
- (id)initWithResult:(id)arg1;
- (void)setSuggestedContactIdentifier:(id)arg1;
- (id)suggestedContactIdentifier;

@end
