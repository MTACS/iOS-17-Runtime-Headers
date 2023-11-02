
@interface _MSMessageMediaPayload : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding> {
    NSString * _accessibilityLabel;
    NSURL * _animatedImageCacheURL;
    NSDictionary * _attributionInfo;
    NSData * _data;
    NSString * _externalURI;
    UIImage * _image;
    unsigned long long  _initialFrameIndex;
    bool  _isSticker;
    NSData * _mediaData;
    NSString * _mediaFilename;
    NSString * _mediaType;
    NSURL * _mediaURL;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceFrame;
    unsigned long long  _stickerEffectType;
    NSData * _stickerMetadata;
    NSString * _stickerName;
    NSString * _stickerPackGUID;
    NSArray * _stickerRepresentations;
    NSUUID * _stickerStoreIdentifier;
    NSString * _text;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSURL *animatedImageCacheURL;
@property (nonatomic, copy) NSDictionary *attributionInfo;
@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *externalURI;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long initialFrameIndex;
@property (nonatomic) bool isSticker;
@property (nonatomic, copy) NSData *mediaData;
@property (nonatomic, copy) NSString *mediaFilename;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSURL *mediaURL;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceFrame;
@property (nonatomic) unsigned long long stickerEffectType;
@property (nonatomic, copy) NSData *stickerMetadata;
@property (nonatomic, copy) NSString *stickerName;
@property (nonatomic, copy) NSString *stickerPackGUID;
@property (nonatomic, retain) NSArray *stickerRepresentations;
@property (nonatomic, copy) NSUUID *stickerStoreIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)animatedImageCacheURL;
- (id)attributionInfo;
- (id)convertToStickerWithExtensionIdentifier:(id)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURI;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSticker:(id)arg1;
- (unsigned long long)initialFrameIndex;
- (bool)isSticker;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)mediaData;
- (id)mediaFilename;
- (id)mediaType;
- (id)mediaURL;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAnimatedImageCacheURL:(id)arg1;
- (void)setAttributionInfo:(id)arg1;
- (void)setData:(id)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInitialFrameIndex:(unsigned long long)arg1;
- (void)setIsSticker:(bool)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaFilename:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStickerEffectType:(unsigned long long)arg1;
- (void)setStickerMetadata:(id)arg1;
- (void)setStickerName:(id)arg1;
- (void)setStickerPackGUID:(id)arg1;
- (void)setStickerRepresentations:(id)arg1;
- (void)setStickerStoreIdentifier:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrame;
- (unsigned long long)stickerEffectType;
- (id)stickerMetadata;
- (id)stickerName;
- (id)stickerPackGUID;
- (id)stickerRepresentations;
- (id)stickerStoreIdentifier;
- (id)text;
- (bool)uriIsMemoji;
- (bool)uriIsUltraExtension;

@end
