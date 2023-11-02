
@interface _PXVisualDiagnosticsDrawImageConfiguration : NSObject <PXVisualDiagnosticsDrawImageConfiguration> {
    UIImage * _image;
    NSString * _symbolName;
}

@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSString *symbolName;

- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
