
@interface CPSPrimaryManeuverLayoutConfiguration : NSObject {
    NSAttributedString * _attributedInstruction;
    double  _height;
    NSString * _instruction;
    UIImage * _junctionImage;
    unsigned long long  _layout;
    UIImage * _symbolImage;
}

@property (nonatomic, retain) NSAttributedString *attributedInstruction;
@property (nonatomic) double height;
@property (nonatomic, retain) NSString *instruction;
@property (nonatomic, retain) UIImage *junctionImage;
@property (nonatomic) unsigned long long layout;
@property (nonatomic, retain) UIImage *symbolImage;

- (void).cxx_destruct;
- (id)_layoutString;
- (id)attributedInstruction;
- (id)description;
- (double)height;
- (id)instruction;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)junctionImage;
- (unsigned long long)layout;
- (void)setAttributedInstruction:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setInstruction:(id)arg1;
- (void)setJunctionImage:(id)arg1;
- (void)setLayout:(unsigned long long)arg1;
- (void)setSymbolImage:(id)arg1;
- (id)symbolImage;

@end
