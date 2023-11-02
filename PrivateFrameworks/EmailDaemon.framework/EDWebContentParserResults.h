
@interface EDWebContentParserResults : NSObject {
    NSDictionary * _dataDetectionResults;
    NSString * _oneTimeCode;
    NSArray * _remoteContentLinks;
    NSArray * _richLinkResults;
}

@property (nonatomic, copy) NSDictionary *dataDetectionResults;
@property (nonatomic, copy) NSString *oneTimeCode;
@property (nonatomic, copy) NSArray *remoteContentLinks;
@property (nonatomic, copy) NSArray *richLinkResults;

- (void).cxx_destruct;
- (id)dataDetectionResults;
- (id)oneTimeCode;
- (id)remoteContentLinks;
- (id)richLinkResults;
- (void)setDataDetectionResults:(id)arg1;
- (void)setOneTimeCode:(id)arg1;
- (void)setRemoteContentLinks:(id)arg1;
- (void)setRichLinkResults:(id)arg1;

@end
