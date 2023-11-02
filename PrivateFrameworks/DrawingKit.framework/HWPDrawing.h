
@interface HWPDrawing : PBCodable <NSCopying> {
    int  _compressionAlgorithm;
    unsigned int  _decompressedLength;
    NSData * _encodedCanvasSize;
    NSData * _encodedStrokesFrame;
    struct { 
        unsigned int compressionAlgorithm : 1; 
        unsigned int decompressedLength : 1; 
        unsigned int strokeDataFieldCount : 1; 
        unsigned int strokesCount : 1; 
        unsigned int version : 1; 
    }  _has;
    unsigned int  _strokeDataFieldCount;
    NSData * _strokes;
    unsigned int  _strokesCount;
    PBUnknownFields * _unknownFields;
    unsigned int  _version;
}

@property (nonatomic) int compressionAlgorithm;
@property (nonatomic) unsigned int decompressedLength;
@property (nonatomic, retain) NSData *encodedCanvasSize;
@property (nonatomic, retain) NSData *encodedStrokesFrame;
@property (nonatomic) bool hasCompressionAlgorithm;
@property (nonatomic) bool hasDecompressedLength;
@property (nonatomic, readonly) bool hasEncodedCanvasSize;
@property (nonatomic, readonly) bool hasEncodedStrokesFrame;
@property (nonatomic) bool hasStrokeDataFieldCount;
@property (nonatomic, readonly) bool hasStrokes;
@property (nonatomic) bool hasStrokesCount;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned int strokeDataFieldCount;
@property (nonatomic, retain) NSData *strokes;
@property (nonatomic) unsigned int strokesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (int)StringAsCompressionAlgorithm:(id)arg1;
- (int)compressionAlgorithm;
- (id)compressionAlgorithmAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)decompressedLength;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encodedCanvasSize;
- (id)encodedStrokesFrame;
- (bool)hasCompressionAlgorithm;
- (bool)hasDecompressedLength;
- (bool)hasEncodedCanvasSize;
- (bool)hasEncodedStrokesFrame;
- (bool)hasStrokeDataFieldCount;
- (bool)hasStrokes;
- (bool)hasStrokesCount;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompressionAlgorithm:(int)arg1;
- (void)setDecompressedLength:(unsigned int)arg1;
- (void)setEncodedCanvasSize:(id)arg1;
- (void)setEncodedStrokesFrame:(id)arg1;
- (void)setHasCompressionAlgorithm:(bool)arg1;
- (void)setHasDecompressedLength:(bool)arg1;
- (void)setHasStrokeDataFieldCount:(bool)arg1;
- (void)setHasStrokesCount:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setStrokeDataFieldCount:(unsigned int)arg1;
- (void)setStrokes:(id)arg1;
- (void)setStrokesCount:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)strokeDataFieldCount;
- (id)strokes;
- (unsigned int)strokesCount;
- (id)unknownFields;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
