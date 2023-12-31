
@interface CKPhoneNumberCompressor : NSObject {
    double  _desiredWidth;
    UIFont * _font;
    NSString * _phoneNumber;
    NSArray * _preferredCompressions;
}

@property (nonatomic) double desiredWidth;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSArray *preferredCompressions;

- (void).cxx_destruct;
- (id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1;
- (id)compress;
- (double)desiredWidth;
- (id)font;
- (id)phoneNumber;
- (id)preferredCompressions;
- (void)setDesiredWidth:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPreferredCompressions:(id)arg1;

@end
