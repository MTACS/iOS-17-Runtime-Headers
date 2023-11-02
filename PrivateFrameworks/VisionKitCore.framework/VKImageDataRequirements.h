
@interface VKImageDataRequirements : NSObject {
    unsigned long long  _maxDataLength;
    unsigned long long  _maxLength;
    unsigned long long  _minLength;
    NSString * _uti;
}

@property (nonatomic) unsigned long long maxDataLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic, retain) NSString *uti;

+ (id)stickerRequirements;
+ (id)stickerThumbnailRequirements;

- (void).cxx_destruct;
- (unsigned long long)maxDataLength;
- (unsigned long long)maxLength;
- (unsigned long long)minLength;
- (void)setMaxDataLength:(unsigned long long)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setMinLength:(unsigned long long)arg1;
- (void)setUti:(id)arg1;
- (id)uti;

@end
