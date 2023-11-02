
@interface NELinkMetadataSource : NSObject <NELinkPresentationSource> {
    LPLinkMetadata * _linkMetadata;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)_linkPresentationImageFromImage:(id)arg1;
- (id)initWithTitle:(id)arg1 url:(id)arg2 image:(id)arg3;
- (id)initWithTitle:(id)arg1 url:(id)arg2 imageProvider:(id)arg3 iconProvider:(id)arg4;
- (id)linkMetadata;

@end
