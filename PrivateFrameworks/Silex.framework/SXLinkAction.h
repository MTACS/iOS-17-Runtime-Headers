
@interface SXLinkAction : NSObject <SXLinkAction> {
    NSURL * _URL;
    SXJSONDictionary * _analytics;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)URL;
- (id)analytics;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 analytics:(id)arg2;
- (id)type;

@end
