
@interface _PXVisualDiagnosticsTableColumn : NSObject <PXVisualDiagnosticsTableColumnConfiguration> {
    NSString * _title;
    double  _width;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)arg1;
- (void)setWidth:(double)arg1;
- (id)title;
- (double)width;

@end
