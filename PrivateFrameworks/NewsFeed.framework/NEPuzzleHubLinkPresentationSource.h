
@interface NEPuzzleHubLinkPresentationSource : NSObject <NELinkPresentationSource> {
    <FCTagProviding> * _tag;
    NSString * _title;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) <FCTagProviding> *tag;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 tag:(id)arg2;
- (id)linkMetadata;
- (id)tag;
- (id)title;

@end
