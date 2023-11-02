
@interface _SWStartCollaborationActionResponse : _SWActionResponse <NSCopying, NSSecureCoding> {
    SWCollaborationMetadata * _updatedMetadata;
    NSURL * _url;
}

@property (nonatomic, readonly) _SWCollaborationMetadata *updatedMetadata;
@property (nonatomic, retain) NSURL *url;

+ (id)responseWithURL:(id)arg1 updatedMetadata:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSActionResponseSettings:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationResponse:(id)arg1;
- (id)initWithURL:(id)arg1 updatedMetadata:(id)arg2;
- (bool)isEqualToActionResponse:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)updatedMetadata;
- (id)url;

@end
