
@interface WBSOnDeviceSearchSuggestionsModel : NSObject {
    unsigned int  _addressSize;
    NSFileHandle * _modelFileHandle;
    unsigned int  _scoreSize;
}

@property (nonatomic, readonly) unsigned int addressSize;
@property (nonatomic, readonly) unsigned int scoreSize;

- (void).cxx_destruct;
- (unsigned int)_readMaxScoreAsRootAtAddress:(unsigned int)arg1 withLeafCandidate:(struct _WBSSearchSuggestionCandidate { unsigned int x1; unsigned int x2; bool x3; id x4; }*)arg2 success:(bool*)arg3;
- (bool)_readNextChild:(struct _WBSSearchSuggestionCandidate { unsigned int x1; unsigned int x2; bool x3; id x4; }*)arg1;
- (unsigned int)_readNextNumberOfBytesAsInt:(unsigned int)arg1 success:(bool*)arg2;
- (id)_readNextNumberOfBytesAsString:(unsigned int)arg1 success:(bool*)arg2;
- (unsigned int)addressSize;
- (id)initWithModelFileAtPath:(id)arg1;
- (struct vector<_WBSSearchSuggestionCandidate, std::allocator<_WBSSearchSuggestionCandidate>> { struct _WBSSearchSuggestionCandidate {} *x1; struct _WBSSearchSuggestionCandidate {} *x2; struct __compressed_pair<_WBSSearchSuggestionCandidate *, std::allocator<_WBSSearchSuggestionCandidate>> { struct _WBSSearchSuggestionCandidate {} *x_3_1_1; } x3; })readTreeNodeWithCandidate:(struct _WBSSearchSuggestionCandidate { unsigned int x1; unsigned int x2; bool x3; id x4; }*)arg1;
- (unsigned int)scoreSize;

@end
