
@interface MFBitmap : NSObject {
    unsigned int  m_bitsPerPixel;
    NSMutableData * m_bmpData;
    int  m_compression;
    int  m_height;
    unsigned int  m_infoHeaderSize;
    bool  m_isOS2;
    unsigned int  m_paletteSize;
    int  m_width;
}

- (void).cxx_destruct;
- (void)appendDIBPalette:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (unsigned int)coloursUsed:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (id)init;
- (id)initWithBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;
- (id)initWithDIBitmap:(id)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;
- (id)initWithDIBitmap:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;
- (bool)isEmpty;
- (bool)isFlipped;
- (bool)parseHeader:(const char *)arg1 in_headerSize:(unsigned int)arg2;
- (const char *)pixelData;
- (unsigned long long)pixelDataLength;
- (unsigned int)pixelDataOffset:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (bool)processDIBHeader:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (void)setMonoPalette:(id)arg1;
- (void)setNull;
- (void)writeFileHeader;
- (void)writeInfoHeader;
- (void)writePaletteEntry:(id)arg1 in_index:(int)arg2;

@end
