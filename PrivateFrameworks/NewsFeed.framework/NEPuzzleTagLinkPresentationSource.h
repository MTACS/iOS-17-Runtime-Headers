
@interface NEPuzzleTagLinkPresentationSource : NSObject <NELinkPresentationSource> {
    <FCPuzzleTypeProviding> * _puzzleTag;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) <FCPuzzleTypeProviding> *puzzleTag;

- (void).cxx_destruct;
- (id)initWithPuzzleTag:(id)arg1;
- (id)linkMetadata;
- (id)puzzleTag;

@end
