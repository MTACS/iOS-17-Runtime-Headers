
@interface _SFPBDynamicURLImageResource : PBCodable <NSSecureCoding, _SFPBDynamicURLImageResource> {
    NSString * _formatURL;
    NSArray * _imageOptions;
    _SFPBGraphicalFloat * _pixelHeight;
    _SFPBGraphicalFloat * _pixelWidth;
    bool  _supportsResizing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formatURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *imageOptions;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBGraphicalFloat *pixelHeight;
@property (nonatomic, retain) _SFPBGraphicalFloat *pixelWidth;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsResizing;

- (void).cxx_destruct;
- (void)addImageOptions:(id)arg1;
- (void)clearImageOptions;
- (id)dictionaryRepresentation;
- (id)formatURL;
- (unsigned long long)hash;
- (id)imageOptions;
- (id)imageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageOptionsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pixelHeight;
- (id)pixelWidth;
- (bool)readFrom:(id)arg1;
- (void)setFormatURL:(id)arg1;
- (void)setImageOptions:(id)arg1;
- (void)setPixelHeight:(id)arg1;
- (void)setPixelWidth:(id)arg1;
- (void)setSupportsResizing:(bool)arg1;
- (bool)supportsResizing;
- (void)writeTo:(id)arg1;

@end
