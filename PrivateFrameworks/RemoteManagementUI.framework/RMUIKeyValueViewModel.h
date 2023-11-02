
@interface RMUIKeyValueViewModel : NSObject <NSSecureCoding> {
    RMModelDeclarationBase * _declaration;
    NSString * _declarationIdentifier;
    NSString * _declarationServerToken;
    NSString * _declarationType;
    NSArray * _detailViewModels;
    short  _symbol;
    NSString * _title;
}

@property (retain) RMModelDeclarationBase *declaration;
@property (retain) NSString *declarationIdentifier;
@property (retain) NSString *declarationServerToken;
@property (retain) NSString *declarationType;
@property (retain) NSArray *detailViewModels;
@property short symbol;
@property (retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearModel;
- (id)declaration;
- (id)declarationIdentifier;
- (id)declarationServerToken;
- (id)declarationType;
- (id)detailViewModels;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDeclaration:(id)arg1;
- (void)setDeclarationIdentifier:(id)arg1;
- (void)setDeclarationServerToken:(id)arg1;
- (void)setDeclarationType:(id)arg1;
- (void)setDetailViewModels:(id)arg1;
- (void)setSymbol:(short)arg1;
- (void)setTitle:(id)arg1;
- (short)symbol;
- (id)title;

@end
