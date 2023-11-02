
@interface EDWebContentParserState : NSObject {
    NSURL * _baseURL;
    EFPromise * _dataDetectionPromise;
    EFPromise * _remoteContentPromise;
    EFPromise * _richLinkPromise;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) EFPromise *dataDetectionPromise;
@property (nonatomic, retain) EFPromise *remoteContentPromise;
@property (nonatomic, retain) EFPromise *richLinkPromise;

- (void).cxx_destruct;
- (id)baseURL;
- (id)dataDetectionPromise;
- (id)remoteContentPromise;
- (id)richLinkPromise;
- (void)setBaseURL:(id)arg1;
- (void)setDataDetectionPromise:(id)arg1;
- (void)setRemoteContentPromise:(id)arg1;
- (void)setRichLinkPromise:(id)arg1;

@end
