
@interface VKBarcodeFrameProcessorConfiguration : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _comparisonPoint;
    bool  _isForSingleItem;
    NSArray * _symbologies;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } comparisonPoint;
@property (nonatomic) bool isForSingleItem;
@property (nonatomic, copy) NSArray *symbologies;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })comparisonPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBarcodeFrameProcessorConfiguration:(id)arg1;
- (bool)isForSingleItem;
- (void)setComparisonPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIsForSingleItem:(bool)arg1;
- (void)setSymbologies:(id)arg1;
- (id)symbologies;

@end
