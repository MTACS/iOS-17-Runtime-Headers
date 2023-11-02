
@interface IMAssistantURLWithMetadata : NSObject {
    LPLinkMetadata * _metadata;
    NSURL * _url;
}

@property (nonatomic, retain) LPLinkMetadata *metadata;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
