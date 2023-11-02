
@interface AXMBrailleCanvasDescription : NSObject <NSSecureCoding> {
    bool  _hasConsistentHorizontalPinSpacing;
    bool  _hasConsistentVerticalPinSpacing;
    unsigned long long  _height;
    double  _horizontalPinSpacing;
    double  _interCellHorizontalSpacing;
    double  _interCellVerticalSpacing;
    unsigned long long  _numberOfDiscretePinHeights;
    double  _verticalPinSpacing;
    unsigned long long  _width;
}

@property (nonatomic) bool hasConsistentHorizontalPinSpacing;
@property (nonatomic) bool hasConsistentVerticalPinSpacing;
@property (readonly) unsigned long long height;
@property (nonatomic) double horizontalPinSpacing;
@property (nonatomic) double interCellHorizontalSpacing;
@property (nonatomic) double interCellVerticalSpacing;
@property (readonly) unsigned long long numberOfDiscretePinHeights;
@property (nonatomic) double verticalPinSpacing;
@property (readonly) unsigned long long width;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConsistentHorizontalPinSpacing;
- (bool)hasConsistentVerticalPinSpacing;
- (unsigned long long)height;
- (double)horizontalPinSpacing;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 numberOfDiscretePinHeights:(unsigned long long)arg3;
- (double)interCellHorizontalSpacing;
- (double)interCellVerticalSpacing;
- (unsigned long long)numberOfDiscretePinHeights;
- (void)setHasConsistentHorizontalPinSpacing:(bool)arg1;
- (void)setHasConsistentVerticalPinSpacing:(bool)arg1;
- (void)setHorizontalPinSpacing:(double)arg1;
- (void)setInterCellHorizontalSpacing:(double)arg1;
- (void)setInterCellVerticalSpacing:(double)arg1;
- (void)setVerticalPinSpacing:(double)arg1;
- (double)verticalPinSpacing;
- (unsigned long long)width;

@end
