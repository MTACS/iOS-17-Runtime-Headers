
@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    _MRAudioFormatSettingsProtobuf * _defaultFormat;
    NSMutableArray * _supportedFormats;
}

@property (nonatomic, retain) _MRAudioFormatSettingsProtobuf *defaultFormat;
@property (nonatomic, readonly) bool hasDefaultFormat;
@property (nonatomic, retain) NSMutableArray *supportedFormats;

+ (Class)supportedFormatsType;

- (void).cxx_destruct;
- (void)addSupportedFormats:(id)arg1;
- (void)clearSupportedFormats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultFormat;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultFormat;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDefaultFormat:(id)arg1;
- (void)setSupportedFormats:(id)arg1;
- (id)supportedFormats;
- (id)supportedFormatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedFormatsCount;
- (void)writeTo:(id)arg1;

@end
