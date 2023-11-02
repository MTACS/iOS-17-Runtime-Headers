
@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject {
    MPModelStoreBrowseContentItemBuilder * _contentItemBuilder;
    NSIndexSet * _filteredFCKinds;
    long long  _parseOnceToken;
    id  _rawResponseOutput;
    MPSectionedCollection * _results;
    MPModelStoreBrowseSectionBuilder * _sectionBuilder;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) MPSectionedCollection *results;

- (void).cxx_destruct;
- (id)_parsedContentNode:(id)arg1 additionalAttributesFromParent:(id)arg2;
- (id)_parsedElements:(id)arg1;
- (id)_parsedSectionedCollection;
- (id)initWithRawResponseOutput:(id)arg1 sectionBuilder:(id)arg2 contentItemBuilder:(id)arg3 filteredFCKinds:(id)arg4 userIdentity:(id)arg5;
- (id)results;

@end
