
@interface VUIDocumentUIConfigurationModal : VUIDocumentUIConfiguration {
    bool  _modalOverModalAllowed;
}

@property (getter=isModalOverModalAllowed, nonatomic) bool modalOverModalAllowed;

- (bool)isModalOverModalAllowed;
- (void)setModalOverModalAllowed:(bool)arg1;

@end
