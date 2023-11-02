
@interface WBSWebExtensionPortInfo : NSObject {
    NSString * _destinationApplicationID;
    NSUUID * _destinationID;
    WKWebView * _destinationWebView;
    NSUUID * _extensionID;
    NSUUID * _sourceID;
    WKWebView * _sourceWebView;
}

@property (nonatomic, copy) NSString *destinationApplicationID;
@property (nonatomic, retain) NSUUID *destinationID;
@property (nonatomic) WKWebView *destinationWebView;
@property (nonatomic, retain) NSUUID *extensionID;
@property (nonatomic, retain) NSUUID *sourceID;
@property (nonatomic) WKWebView *sourceWebView;

- (void).cxx_destruct;
- (id)description;
- (id)destinationApplicationID;
- (id)destinationID;
- (id)destinationWebView;
- (id)extensionID;
- (id)initWithExtensionID:(id)arg1 sourceID:(id)arg2 sourceWebView:(id)arg3 destinationApplicationID:(id)arg4;
- (id)initWithExtensionID:(id)arg1 sourceID:(id)arg2 sourceWebView:(id)arg3 destinationID:(id)arg4 destinationWebView:(id)arg5;
- (void)setDestinationApplicationID:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setDestinationWebView:(id)arg1;
- (void)setExtensionID:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setSourceWebView:(id)arg1;
- (id)sourceID;
- (id)sourceWebView;

@end
