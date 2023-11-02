
@interface MPModelStoreGroupingsMusicKitResponseParser : NSObject {
    MPModelStoreBrowseContentItemBuilder * _contentItemBuilder;
    NSIndexSet * _filteredFCKinds;
    unsigned long long  _options;
    long long  _parseOnceToken;
    id  _rawResponseOutput;
    MPSectionedCollection * _results;
    NSString * _rootObjectIdentifier;
    MPModelStoreBrowseSectionBuilder * _sectionBuilder;
    NSRegularExpression * _storeBagLinkRegularExpression;
    ICURLBag * _storeURLBag;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) MPSectionedCollection *results;

- (void).cxx_destruct;
- (id)_parsedContentNode:(id)arg1 uniformContentItemTypeResolver:(id)arg2 additionalAttributesFromParent:(id)arg3;
- (id)_parsedEditorialElement:(id)arg1;
- (id)_parsedEditorialElementX:(id)arg1;
- (id)_parsedEditorialElements:(id)arg1;
- (id)_parsedSectionedCollection;
- (id)attributesForContentNode:(id)arg1;
- (id)bagRoomURLRegularExpression;
- (id)childrenOfContentNode:(id)arg1;
- (id)description;
- (bool)featuredContentKindCorrespondsToItem:(id)arg1;
- (long long)featuredContentKindForNode:(id)arg1;
- (id)firstChildOfContentNode:(id)arg1;
- (id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5 rootObjectIdentifier:(id)arg6 options:(unsigned long long)arg7 storeURLBag:(id)arg8;
- (bool)isContentNodeAnEditorialElement:(id)arg1;
- (id)linkSectionWithDictionary:(id)arg1;
- (id)linksForContentNode:(id)arg1;
- (id)musicAPIURLWithLinkURLString:(id)arg1;
- (id)results;

@end
