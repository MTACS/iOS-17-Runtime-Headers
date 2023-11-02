
@interface ICASPdfState : NSObject <AADataType> {
    long long  _pdfState;
}

@property (nonatomic, readonly) long long pdfState;

- (id)initWithPdfState:(long long)arg1;
- (long long)pdfState;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
