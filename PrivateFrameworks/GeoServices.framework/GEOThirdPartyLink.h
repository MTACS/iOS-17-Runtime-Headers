
@interface GEOThirdPartyLink : NSObject {
    NSString * _adamID;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) NSURL *url;

+ (id)thirdPartyLinkFromProto:(id)arg1;

- (void).cxx_destruct;
- (id)adamID;
- (id)initWithAdamID:(id)arg1 url:(id)arg2;
- (id)url;

@end
