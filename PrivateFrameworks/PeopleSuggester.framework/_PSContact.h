
@interface _PSContact : NSObject {
    CNContact * _cnContact;
    bool  _isChild;
}

@property (nonatomic, copy) CNContact *cnContact;
@property (nonatomic) bool isChild;

- (void).cxx_destruct;
- (id)cnContact;
- (id)initWithCNContact:(id)arg1 isChild:(bool)arg2;
- (bool)isChild;
- (void)setCnContact:(id)arg1;
- (void)setIsChild:(bool)arg1;

@end
