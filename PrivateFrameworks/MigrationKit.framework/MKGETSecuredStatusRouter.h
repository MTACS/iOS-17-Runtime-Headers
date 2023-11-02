
@interface MKGETSecuredStatusRouter : NSObject <MKHTTPRouter> {
    NSDictionary * _signatures;
    MKStorage * _storage;
    NSArray * _supportedContentTypes;
    NSArray * _supportedTransferEncodings;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *signatures;
@property (nonatomic, retain) MKStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedContentTypes;
@property (nonatomic, retain) NSArray *supportedTransferEncodings;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)init;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setSignatures:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setSupportedContentTypes:(id)arg1;
- (void)setSupportedTransferEncodings:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)signatures;
- (id)storage;
- (id)supportedContentTypes;
- (id)supportedTransferEncodings;
- (id)uuid;

@end
