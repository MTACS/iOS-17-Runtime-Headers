
@interface CDBAttachmentInfo : NSObject {
    NSURL * _legacyURL;
    NSString * _localRelativePath;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSURL *legacyURL;
@property (nonatomic, readonly, copy) NSString *localRelativePath;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)initWithLegacyURL:(id)arg1 url:(id)arg2 localRelativePath:(id)arg3;
- (id)legacyURL;
- (id)localRelativePath;
- (id)url;

@end
