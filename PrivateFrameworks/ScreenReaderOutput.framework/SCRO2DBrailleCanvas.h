
@interface SCRO2DBrailleCanvas : NSObject {
    NSData * _brailleTextData;
    SCRO2DBrailleCanvasDescriptor * _descriptor;
    NSData * _imageData;
    unsigned long long  _numberOfTextLines;
    NSArray * _pins;
}

@property (readonly) SCRO2DBrailleCanvasDescriptor *descriptor;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) unsigned long long numberOfTextLines;

- (void).cxx_destruct;
- (void)_blitBMP;
- (void)_blitCell:(unsigned char)arg1 AtX:(unsigned long long)arg2 y:(unsigned long long)arg3;
- (void)_blitText;
- (bool)_canBlitCellAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)_clearCells;
- (union { unsigned long long x1; float x2; })_fullyDownPinState;
- (union { unsigned long long x1; float x2; })_fullyUpPinState;
- (unsigned long long)_numberOfTextLines;
- (id)_pinForX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (unsigned long long)_textDisplayHeight;
- (void)_updateCells;
- (void)_updateTextCells;
- (unsigned long long)cellHeight;
- (unsigned long long)cellWidth;
- (id)debugAsciiCanvas;
- (id)descriptor;
- (unsigned long long)detentCount;
- (bool)hasConsistentHorizontalPinSpacing;
- (bool)hasConsistentVerticalPinSpacing;
- (unsigned long long)height;
- (double)horizontalPinSpacing;
- (id)imageData;
- (id)init;
- (id)initWithCanvasDescriptor:(id)arg1;
- (double)interCellHorizontalSpacing;
- (double)interCellVerticalSpacing;
- (unsigned long long)numberOfTextLines;
- (unsigned long long)pinHeightStyle;
- (union { unsigned long long x1; float x2; })pinStateForX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)setBrailleText:(const char *)arg1 length:(unsigned long long)arg2;
- (void)setImageData:(id)arg1;
- (void)setNumberOfTextLines:(unsigned long long)arg1;
- (void)setPinState:(union { unsigned long long x1; float x2; })arg1 forX:(unsigned long long)arg2 y:(unsigned long long)arg3;
- (bool)skipPinBetweenCellsHorizontally;
- (bool)skipPinBetweenCellsVertically;
- (bool)supportsBrailleText;
- (double)verticalPinSpacing;
- (unsigned long long)width;

@end
