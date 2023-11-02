
@interface PLPositionalImageTable : PLPositionalTable <PLThumbPersistenceManager> {
    PLImageFormat * _format;
    unsigned long long  _formatBytesPerPixel;
    bool  _formatIsCropped;
    unsigned long long  _formatMaxBytesPerRow;
    int  _formatSideLen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PLImageFormat *format;
@property (nonatomic, readonly) unsigned long long formatBytesPerPixel;
@property (nonatomic) bool formatIsCropped;
@property (nonatomic, readonly) unsigned long long formatMaxBytesPerRow;
@property (nonatomic) int formatSideLen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

+ (struct __CFString { }*)colorSpaceName;
+ (unsigned long long)metalPixelFormat;

- (void).cxx_destruct;
- (id)_debugDescription;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (struct CGImage { }*)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;
- (id)debugImageDataAtIndex:(unsigned long long)arg1;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (Class)entriesClass;
- (id)format;
- (unsigned long long)formatBytesPerPixel;
- (bool)formatIsCropped;
- (unsigned long long)formatMaxBytesPerRow;
- (int)formatSideLen;
- (void)getImageDataOffset:(long long*)arg1 size:(struct CGSize { double x1; double x2; }*)arg2 bytesPerRow:(unsigned long long*)arg3 fromEntryFooter:(struct PLImageTableEntryFooter_s { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; }*)arg4;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (id)initWithPath:(id)arg1 readOnly:(bool)arg2 format:(id)arg3;
- (void)preheatDataForThumbnailIndexes:(id)arg1;
- (bool)readImageDataAtIndex:(unsigned long long)arg1 intoPoolNode:(struct tagPLPositionalTableMemoryPoolNode { void *x1; struct tagPLPositionalTableMemoryPool {} *x2; bool x3; struct tagPLPositionalTableMemoryPoolNode {} *x4; }*)arg2 bytesRead:(unsigned long long*)arg3 imageWidth:(int*)arg4 imageHeight:(int*)arg5 imageDataWidth:(int*)arg6 imageDataHeight:(int*)arg7 startingOffset:(long long*)arg8 bytesPerRow:(unsigned long long*)arg9 uuidBytes:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; }*)arg10;
- (id)readImageEntriesAtIndexes:(id)arg1;
- (void)setFormatIsCropped:(bool)arg1;
- (void)setFormatSideLen:(int)arg1;
- (struct PLImageTableEntryFooter_s { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; }*)tableFooterForIndex:(unsigned long long)arg1;
- (bool)usesThumbIdentifiers;
- (bool)validateData:(id)arg1 withToken:(id)arg2;
- (bool)writeDebugImageAtIndex:(unsigned long long)arg1 toFileURL:(id)arg2;

@end
