
@interface RMUIDeclarationInfo : NSObject {
    RMModelDeclarationBase * _declaration;
    NSString * _declarationIdentifier;
    NSString * _declarationServerToken;
    NSString * _declarationType;
    NSString * _descriptor;
    NSArray * _details;
    bool  _isActive;
    bool  _isRequired;
    NSString * _label;
    NSString * _profileIdentifier;
}

@property (nonatomic, retain) RMModelDeclarationBase *declaration;
@property (nonatomic, retain) NSString *declarationIdentifier;
@property (nonatomic, retain) NSString *declarationServerToken;
@property (nonatomic, retain) NSString *declarationType;
@property (nonatomic, retain) NSString *descriptor;
@property (nonatomic, retain) NSArray *details;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isRequired;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *profileIdentifier;

- (void).cxx_destruct;
- (id)declaration;
- (id)declarationIdentifier;
- (id)declarationServerToken;
- (id)declarationType;
- (id)descriptor;
- (id)details;
- (id)initWithDeclaration:(id)arg1 label:(id)arg2 descriptor:(id)arg3;
- (id)initWithDeclarationIdentifier:(id)arg1 declarationServerToken:(id)arg2 declarationType:(id)arg3 label:(id)arg4 descriptor:(id)arg5;
- (id)initWithProfileDeclaration:(id)arg1 label:(id)arg2 profileIdentifier:(id)arg3 isRequired:(bool)arg4 isActive:(bool)arg5;
- (bool)isActive;
- (bool)isRequired;
- (id)label;
- (id)profileIdentifier;
- (void)setDeclaration:(id)arg1;
- (void)setDeclarationIdentifier:(id)arg1;
- (void)setDeclarationServerToken:(id)arg1;
- (void)setDeclarationType:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsRequired:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;

@end
