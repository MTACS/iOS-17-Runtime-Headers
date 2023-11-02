
@interface NESportsTagLinkPresentationSource : NSObject <NELinkPresentationSource> {
    <FCSportsProviding> * _sportsTag;
    <NETagImageShareAttributeProviderType> * _tagImageProvider;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) <FCSportsProviding> *sportsTag;
@property (nonatomic, readonly) <NETagImageShareAttributeProviderType> *tagImageProvider;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)iconItemProviderForSportsTag:(id)arg1 tagImageProvider:(id)arg2;
+ (id)imageItemProviderForSportsTag:(id)arg1 tagImageProvider:(id)arg2;

- (void).cxx_destruct;
- (id)initWithSportsTag:(id)arg1 tagImageProvider:(id)arg2;
- (id)initWithTitle:(id)arg1 url:(id)arg2 sportsTag:(id)arg3 tagImageProvider:(id)arg4;
- (id)linkMetadata;
- (id)sportsTag;
- (id)tagImageProvider;
- (id)title;
- (id)url;

@end
