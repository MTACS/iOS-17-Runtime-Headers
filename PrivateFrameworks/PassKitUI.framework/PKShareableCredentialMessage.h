
@interface PKShareableCredentialMessage : NSObject <PKSharingMessageExtensionMessage> {
    bool  _isFromMe;
    bool  _isPending;
    PKProtobufShareableCredentialMessage * _protoMessage;
}

@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) NSString *dataString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isPassInLibrary;
@property (nonatomic) bool isPending;
@property (nonatomic, readonly) bool isShareAcceptable;
@property (nonatomic, copy) UIImage *passThumbnailImage;
@property (nonatomic, copy) NSString *policyIdentifier;
@property (nonatomic, copy) NSArray *shareableCredentials;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_shareableCredentialMessageDataURLWithData:(id)arg1;
- (id)_shareableCredentialMessageDataWithDataURL:(id)arg1;
- (id)caption;
- (id)dataString;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isFromMe;
- (bool)isPassInLibrary;
- (bool)isPending;
- (bool)isShareAcceptable;
- (id)passThumbnailImage;
- (id)policyIdentifier;
- (void)setCaption:(id)arg1;
- (void)setDataString:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsPassInLibrary:(bool)arg1;
- (void)setIsPending:(bool)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)setPolicyIdentifier:(id)arg1;
- (void)setShareableCredentials:(id)arg1;
- (id)shareableCredentials;
- (id)urlRepresentation;

@end
