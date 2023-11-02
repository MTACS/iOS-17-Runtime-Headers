
@interface PKAccountWebServiceTaxFormsResponse : PKAccountWebServiceResponse {
    NSArray * _taxForms;
}

@property (nonatomic, readonly, copy) NSArray *taxForms;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)taxForms;

@end
