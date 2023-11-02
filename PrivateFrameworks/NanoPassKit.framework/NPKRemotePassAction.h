
@interface NPKRemotePassAction : NSObject <NSSecureCoding> {
    NPKProtoRemotePassActionEnvelope * _protoEnvelope;
    MSMessage * _underlyingMessage;
}

@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) unsigned long long cardType;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *passLocalizedDescription;
@property (nonatomic, readonly) NSString *passOrganizationName;
@property (nonatomic, retain) NPKProtoRemotePassActionEnvelope *protoEnvelope;
@property (getter=isResponse, nonatomic, readonly) bool response;
@property (nonatomic, readonly) bool supportsCommutePlanRenewal;
@property (nonatomic, readonly) bool supportsTopUp;
@property (nonatomic, retain) MSMessage *underlyingMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_imageForMessage:(id)arg1;
- (id)_messageDataURLWithData:(id)arg1;
- (id)_messageDataWithDataURL:(id)arg1;
- (void)_updateDataURL;
- (void)_updateLayoutContentsWithImage:(id)arg1;
- (void)_updateSummaryText;
- (id)caption;
- (unsigned long long)cardType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 protoEnvelope:(id)arg2 image:(id)arg3;
- (id)initWithProtoEnvelope:(id)arg1 image:(id)arg2;
- (id)initWithUnderlyingMessage:(id)arg1;
- (bool)isResponse;
- (id)passLocalizedDescription;
- (id)passOrganizationName;
- (id)protoEnvelope;
- (void)setProtoEnvelope:(id)arg1;
- (void)setUnderlyingMessage:(id)arg1;
- (bool)supportsCommutePlanRenewal;
- (bool)supportsTopUp;
- (id)underlyingMessage;

@end
