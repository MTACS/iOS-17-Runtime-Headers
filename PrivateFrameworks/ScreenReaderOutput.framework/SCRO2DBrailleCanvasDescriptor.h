
@interface SCRO2DBrailleCanvasDescriptor : NSObject <NSSecureCoding> {
    unsigned long long  _cellHeight;
    unsigned long long  _cellWidth;
    unsigned long long  _detentCount;
    bool  _hasConsistentHorizontalPinSpacing;
    bool  _hasConsistentVerticalPinSpacing;
    unsigned long long  _height;
    double  _horizontalPinSpacing;
    double  _interCellHorizontalSpacing;
    double  _interCellVerticalSpacing;
    unsigned long long  _pinHeightStyle;
    bool  _skipPinBetweenCellsHorizontally;
    bool  _skipPinBetweenCellsVertically;
    double  _verticalPinSpacing;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long cellHeight;
@property (nonatomic) unsigned long long cellWidth;
@property (nonatomic) unsigned long long detentCount;
@property (nonatomic) bool hasConsistentHorizontalPinSpacing;
@property (nonatomic) bool hasConsistentVerticalPinSpacing;
@property (nonatomic) unsigned long long height;
@property (nonatomic) double horizontalPinSpacing;
@property (nonatomic) double interCellHorizontalSpacing;
@property (nonatomic) double interCellVerticalSpacing;
@property (nonatomic) unsigned long long pinHeightStyle;
@property (nonatomic) bool skipPinBetweenCellsHorizontally;
@property (nonatomic) bool skipPinBetweenCellsVertically;
@property (nonatomic) double verticalPinSpacing;
@property (nonatomic) unsigned long long width;

+ (bool)supportsSecureCoding;

- (unsigned long long)cellHeight;
- (unsigned long long)cellWidth;
- (unsigned long long)detentCount;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConsistentHorizontalPinSpacing;
- (bool)hasConsistentVerticalPinSpacing;
- (unsigned long long)height;
- (double)horizontalPinSpacing;
- (id)initWithCoder:(id)arg1;
- (double)interCellHorizontalSpacing;
- (double)interCellVerticalSpacing;
- (unsigned long long)numberOfGraphicsLinesAvailableForTextLines:(unsigned long long)arg1;
- (unsigned long long)numberOfTextLinesAvailable;
- (unsigned long long)pinHeightStyle;
- (void)setCellHeight:(unsigned long long)arg1;
- (void)setCellWidth:(unsigned long long)arg1;
- (void)setDetentCount:(unsigned long long)arg1;
- (void)setHasConsistentHorizontalPinSpacing:(bool)arg1;
- (void)setHasConsistentVerticalPinSpacing:(bool)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setHorizontalPinSpacing:(double)arg1;
- (void)setInterCellHorizontalSpacing:(double)arg1;
- (void)setInterCellVerticalSpacing:(double)arg1;
- (void)setPinHeightStyle:(unsigned long long)arg1;
- (void)setSkipPinBetweenCellsHorizontally:(bool)arg1;
- (void)setSkipPinBetweenCellsVertically:(bool)arg1;
- (void)setVerticalPinSpacing:(double)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (bool)skipPinBetweenCellsHorizontally;
- (bool)skipPinBetweenCellsVertically;
- (double)verticalPinSpacing;
- (unsigned long long)width;

@end
