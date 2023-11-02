
@interface NEPuzzleLinkPresentationSource : NSObject <NELinkPresentationSource> {
    LPImage * _linkPresentationImage;
    NSString * _subtitle;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) LPImage *linkPresentationImage;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithPuzzle:(id)arg1;
- (id)linkMetadata;
- (id)linkPresentationImage;
- (id)linkPresentationImageFromPuzzle:(id)arg1;
- (id)subtitle;
- (id)subtitleFromPuzzle:(id)arg1;
- (id)title;
- (id)titleFromPuzzle:(id)arg1;
- (id)url;
- (id)urlFromPuzzle:(id)arg1;

@end
