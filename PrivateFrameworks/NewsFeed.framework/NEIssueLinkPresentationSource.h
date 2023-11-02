
@interface NEIssueLinkPresentationSource : NSObject <NELinkPresentationSource> {
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
- (id)initWithIssue:(id)arg1;
- (id)linkMetadata;
- (id)linkPresentationImage;
- (id)linkPresentationImageFromIssue:(id)arg1;
- (id)subtitle;
- (id)subtitleFromIssue:(id)arg1;
- (id)title;
- (id)titleFromIssue:(id)arg1;
- (id)url;
- (id)urlFromIssue:(id)arg1;

@end
