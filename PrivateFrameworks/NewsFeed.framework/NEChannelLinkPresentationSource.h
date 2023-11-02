
@interface NEChannelLinkPresentationSource : NSObject <NELinkPresentationSource> {
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithChannel:(id)arg1;
- (id)linkMetadata;
- (id)title;
- (id)url;

@end
