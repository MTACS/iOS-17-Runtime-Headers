
@interface WBSURLCompletionDatabase : NSObject {
    <WBSURLCompletionDataSource> * _dataSource;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _fullTextBookmarkMatchesCache;
    NSString * _fullTextBookmarkMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _fullTextHistoryMatchesCache;
    NSString * _fullTextHistoryMatchesCacheString;
    NSString * _fullTextHistoryMatchesCacheStringProfileIdentifier;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _prefixBookmarkMatchesCache;
    NSString * _prefixBookmarkMatchesCacheString;
    /* Warning: unhandled struct encoding: '{Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^@"m_capacity"I"m_size"I}' */ struct Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        m_capacity **m_buffer; 
    }  _prefixHistoryMatchesCache;
    NSString * _prefixHistoryMatchesCacheProfileIdentifier;
    NSString * _prefixHistoryMatchesCacheString;
}

@property (nonatomic) <WBSURLCompletionDataSource> *dataSource;

+ (bool)_isMatchURLString:(id)arg1 equivalentToBaseURLString:(id)arg2;
+ (bool)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const void*)arg1;
+ (bool)_matchMistookErrorTitleForPageTitleForBookmarkAndHistoryCompletionMatch:(const void*)arg1;
+ (bool)_redirectionChainsOfCompletionMatchData:(id)arg1 containURLString:(id)arg2;
+ (struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch {} *x1; })_synthesizeURLMatchWithURLString:(id)arg1 title:(id)arg2 topHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch {} *x1; })arg3 historyMatches:(void*)arg4 bookmarkMatches:(void*)arg5 typedString:(id)arg6 timeNow:(double)arg7 completionDataSource:(id)arg8;
+ (struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch {} *x1; })_topHitFromBaseURLMatchForTopHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch {} *x1; })arg1 shouldReplaceTopHitFromMatches:(bool*)arg2 historyMatches:(void*)arg3 bookmarkMatches:(void*)arg4 typedString:(id)arg5 searchParameters:(id)arg6 timeNow:(double)arg7 completionDataSource:(id)arg8;
+ (bool)_topHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch {} *x1; })arg1 isOneOfManyUnremarkableMatchesInLocalHistoryMatches:(void*)arg2 inDomain:(id)arg3;
+ (void)initializeURLCompletionOnMainThread;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getSortedFullTextMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 topHits:(void*)arg3 historyMatches:(void*)arg4 historyLimit:(unsigned long long)arg5 bookmarkMatches:(void*)arg6 bookmarkLimit:(unsigned long long)arg7 searchParameters:(id)arg8;
- (void)_getSortedMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 topHits:(void*)arg3 historyMatches:(void*)arg4 historyLimit:(unsigned long long)arg5 bookmarkMatches:(void*)arg6 bookmarkLimit:(unsigned long long)arg7 searchParameters:(id)arg8 prefixMatchesOnly:(bool)arg9;
- (void)_getSortedPrefixMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 topHits:(void*)arg3 historyMatches:(void*)arg4 historyLimit:(unsigned long long)arg5 bookmarkMatches:(void*)arg6 bookmarkLimit:(unsigned long long)arg7 searchParameters:(id)arg8;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 historyMatches:(void*)arg3 bookmarkMatches:(void*)arg4 dataTypes:(unsigned int)arg5;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 historyMatches:(void*)arg3 bookmarkMatches:(void*)arg4;
- (void)_removeMatchesThatMistookErrorTitleForPageTitleFromMatches:(void*)arg1;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(void*)arg1;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(bool)arg1;
- (void)clearHistoryMatchesCache;
- (void)clearMatchesCaches;
- (id)dataSource;
- (void)getBestMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 topHits:(id*)arg3 matches:(id*)arg4 limit:(unsigned long long)arg5 forQueryID:(long long)arg6 withSearchParameters:(id)arg7;
- (id)init;
- (void)setDataSource:(id)arg1;

@end
