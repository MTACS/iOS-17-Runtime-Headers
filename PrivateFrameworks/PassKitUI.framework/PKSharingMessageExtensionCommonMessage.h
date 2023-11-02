
@interface PKSharingMessageExtensionCommonMessage : NSObject <PKSharingMessageExtensionMessage> {
    bool  _isFromMe;
    bool  _isPending;
    PKProtobufCommonSharingMessage * _message;
}

@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, retain) NSString *buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isPending;
@property (nonatomic, retain) NSData *messageData;
@property (nonatomic, retain) NSString *messageType;
@property (nonatomic, retain) NSData *rawThumbnailData;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *topLeftTitle;
@property (nonatomic, retain) NSString *topRightTitle;

+ (id)_messageDataWithDataURL:(id)arg1 prefix:(id)arg2;
+ (id)messageTypeFromURL:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithCommonMessage:(id)arg1 url:(id)arg2;
- (id)_messageDataURLWithData:(id)arg1 prefix:(id)arg2;
- (id)actionURL;
- (id)buttonTitle;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isFromMe;
- (bool)isPending;
- (id)messageData;
- (id)messageType;
- (id)rawThumbnailData;
- (void)setActionURL:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsPending:(bool)arg1;
- (void)setMessageData:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setRawThumbnailData:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopLeftTitle:(id)arg1;
- (void)setTopRightTitle:(id)arg1;
- (id)subtitle;
- (id)thumbnail;
- (id)title;
- (id)topLeftTitle;
- (id)topRightTitle;
- (id)urlRepresentation;

@end
