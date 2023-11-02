
@interface _UIAlertControllerActionViewMetrics : NSObject {
    double  _descriptiveLabelTextWidth;
    double  _labelTextWidth;
}

@property (nonatomic) double descriptiveLabelTextWidth;
@property (nonatomic) double labelTextWidth;

- (double)descriptiveLabelTextWidth;
- (double)labelTextWidth;
- (void)setDescriptiveLabelTextWidth:(double)arg1;
- (void)setLabelTextWidth:(double)arg1;

@end