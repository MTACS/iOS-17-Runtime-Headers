
@interface SSFindMyResultBuilder : SSContactResultBuilder

+ (id)bundleId;

- (id)buildCompactCard;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildInlineCard;
- (id)buildResult;
- (id)fmfPunchoutURL;
- (id)resultIdentifier;

@end
