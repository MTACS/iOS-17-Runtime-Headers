
@interface NESportsEventLinkPresentationSource : NSObject <NELinkPresentationSource> {
    NSItemProvider * _linkPresentationIconProvider;
    NSItemProvider * _linkPresentationImageProvider;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) NSItemProvider *linkPresentationIconProvider;
@property (nonatomic, readonly) NSItemProvider *linkPresentationImageProvider;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)iconItemProviderForSportsEvent:(id)arg1 tagImageProvider:(id)arg2;
+ (id)imageItemProviderForSportsEvent:(id)arg1 tagImageProvider:(id)arg2;
+ (id)titleFromSportsEvent:(id)arg1;
+ (id)urlFromSportsEvent:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSportsEvent:(id)arg1 tagImageProvider:(id)arg2;
- (id)initWithTitle:(id)arg1 url:(id)arg2 sportsEvent:(id)arg3 tagImageProvider:(id)arg4;
- (id)linkMetadata;
- (id)linkPresentationIconProvider;
- (id)linkPresentationImageProvider;
- (id)title;
- (id)url;

@end
