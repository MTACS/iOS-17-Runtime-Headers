
@interface SLAttachment : NSObject <NSSecureCoding> {
    long long  _downsampleStatus;
    NSString * _identifier;
    NSItemProvider * _itemProvider;
    long long  _itemProviderPreviewType;
    bool  _needsAnotherPreviewGeneration;
    id  _payload;
    NSURL * _payloadSourceFileURL;
    id /* block */  _payloadUpdateObserver;
    UIImage * _previewImage;
    long long  _previewType;
    id /* block */  _previewUpdateObserver;
    bool  _startedPayloadLoad;
    long long  _type;
    NSString * _typeIdentifier;
}

@property (nonatomic) long long downsampleStatus;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, readonly) long long itemProviderPreviewType;
@property (nonatomic) bool needsAnotherPreviewGeneration;
@property (nonatomic, copy) id payload;
@property (nonatomic, copy) NSURL *payloadSourceFileURL;
@property (nonatomic, retain) UIImage *previewImage;
@property long long previewType;
@property (nonatomic) bool startedPayloadLoad;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *typeIdentifier;

+ (bool)attachmentTypeRepresentsAnImage:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_uniqueIdentifier;
- (id)description;
- (long long)downsampleStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 type:(long long)arg2 previewImage:(id)arg3;
- (id)itemProvider;
- (long long)itemProviderPreviewType;
- (bool)needsAnotherPreviewGeneration;
- (id)payload;
- (id)payloadSourceFileURL;
- (id)previewImage;
- (long long)previewType;
- (void)setDownsampleStatus:(long long)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setNeedsAnotherPreviewGeneration:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadSourceFileURL:(id)arg1;
- (void)setPayloadUpdateObserverWithBlock:(id /* block */)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setPreviewType:(long long)arg1;
- (void)setPreviewUpdateObserverWithBlock:(id /* block */)arg1;
- (void)setStartedPayloadLoad:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (bool)startedPayloadLoad;
- (long long)type;
- (id)typeIdentifier;

@end