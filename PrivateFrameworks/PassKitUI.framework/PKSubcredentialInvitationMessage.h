
@interface PKSubcredentialInvitationMessage : NSObject <PKSharingMessageExtensionMessage> {
    bool  _isFromMe;
    bool  _isPending;
    PKProtobufSubcredentialInvitationMessage * _protoMessage;
}

@property (nonatomic, copy) NSString *dataString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isPending;
@property (nonatomic, copy) UIImage *passThumbnailImage;
@property (nonatomic, copy) PKAppletSubcredentialSharingInvitation *phoneInvitation;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) PKAppletSubcredentialSharingInvitation *watchInvitation;

- (void).cxx_destruct;
- (id)_subcredentialInvitationMessageDataURLWithData:(id)arg1;
- (id)_subcredentialInvitationMessageDataWithDataURL:(id)arg1;
- (id)dataString;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isFromMe;
- (bool)isPending;
- (id)passThumbnailImage;
- (id)phoneInvitation;
- (void)setDataString:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsPending:(bool)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)setPhoneInvitation:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWatchInvitation:(id)arg1;
- (unsigned long long)status;
- (id)uniqueIdentifier;
- (id)urlRepresentation;
- (id)watchInvitation;

@end
