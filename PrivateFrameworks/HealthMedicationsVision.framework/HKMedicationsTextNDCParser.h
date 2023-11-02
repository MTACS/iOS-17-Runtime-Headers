
@interface HKMedicationsTextNDCParser : NSObject {
    NSArray * _NDC10RegularExpressions;
    NSRegularExpression * _NDC11RegularExpression;
}

@property (nonatomic, retain) NSArray *NDC10RegularExpressions;
@property (nonatomic, retain) NSRegularExpression *NDC11RegularExpression;

- (void).cxx_destruct;
- (id)NDC10RegularExpressions;
- (id)NDC11RegularExpression;
- (id)init;
- (id)parsedNDCCodeFromString:(id)arg1;
- (void)setNDC10RegularExpressions:(id)arg1;
- (void)setNDC11RegularExpression:(id)arg1;

@end
