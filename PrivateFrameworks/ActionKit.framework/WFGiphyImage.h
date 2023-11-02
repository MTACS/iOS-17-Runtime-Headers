
@interface WFGiphyImage : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    WFImage * _cachedImage;
    unsigned long long  _fileSize;
    unsigned long long  _height;
    NSURL * _url;
    NSURL * _videoURL;
    unsigned long long  _width;
}

@property (nonatomic, retain) WFImage *cachedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long height;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly, copy) NSURL *videoURL;
@property (nonatomic, readonly) unsigned long long width;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedImage;
- (unsigned long long)fileSize;
- (unsigned long long)height;
- (void)setCachedImage:(id)arg1;
- (id)url;
- (id)videoURL;
- (unsigned long long)width;

@end
