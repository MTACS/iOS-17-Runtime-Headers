
@interface PLTableThumbnailEncoderResult : NSObject {
    PLImageFormat * _imageFormat;
    NSData * _ktxData;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) PLImageFormat *imageFormat;
@property (nonatomic, readonly) NSData *ktxData;
@property (nonatomic, readonly) NSData *ktxHeaderData;
@property (nonatomic, readonly) struct PLImageTableEntryFooter_s { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; } tableFooter;
@property (nonatomic, retain) NSString *uuid;

+ (unsigned long long)_minKtxDataLengthFromImageSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (struct PL_KTXHeader { unsigned char x1[12]; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; }*)_ktxHeader;
- (id)entryDataForEntryLength:(unsigned long long)arg1;
- (id)imageData;
- (unsigned long long)imageDataLength;
- (id)imageFormat;
- (id)initWithKtxData:(id)arg1 uuid:(id)arg2 format:(id)arg3;
- (id)ktxData;
- (id)ktxHeaderData;
- (void)setUuid:(id)arg1;
- (struct PLImageTableEntryFooter_s { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; })tableFooter;
- (id)uuid;

@end
