
@interface HMDCoreDataCloudShareInvitation : NSObject {
    CKDeviceToDeviceShareInvitationToken * _token;
    NSURL * _url;
}

@property (readonly, copy) NSDictionary *content;
@property (readonly) CKDeviceToDeviceShareInvitationToken *token;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (id)content;
- (id)initWithURL:(id)arg1 token:(id)arg2;
- (id)token;
- (id)url;

@end
