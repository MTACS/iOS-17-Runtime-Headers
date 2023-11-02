
@interface NETagLinkPresentationSource : NSObject <NELinkPresentationSource> {
    NELinkMetadataSource * _linkMetadataSource;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) NELinkMetadataSource *linkMetadataSource;

- (void).cxx_destruct;
- (id)initWithTag:(id)arg1 image:(id)arg2;
- (id)initWithTitle:(id)arg1 url:(id)arg2 image:(id)arg3;
- (id)linkMetadata;
- (id)linkMetadataSource;

@end
