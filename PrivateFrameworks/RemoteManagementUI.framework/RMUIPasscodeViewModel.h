
@interface RMUIPasscodeViewModel : NSObject <NSSecureCoding> {
    NSArray * _detailViewModels;
    short  _symbol;
    NSString * _title;
}

@property (retain) NSArray *detailViewModels;
@property short symbol;
@property (retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearModel;
- (id)detailViewModels;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDetailViewModels:(id)arg1;
- (void)setSymbol:(short)arg1;
- (void)setTitle:(id)arg1;
- (short)symbol;
- (id)title;

@end
