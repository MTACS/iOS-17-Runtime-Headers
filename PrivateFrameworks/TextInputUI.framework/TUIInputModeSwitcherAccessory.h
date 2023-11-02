
@interface TUIInputModeSwitcherAccessory : TUICursorAccessory <NSSecureCoding> {
    NSArray * _inputSourceIDs;
    bool  _isInputSource;
    long long  _selectedIndex;
}

@property (nonatomic, retain) NSArray *inputSourceIDs;
@property (nonatomic) bool isInputSource;
@property (nonatomic) long long selectedIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalComponents;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputSourceIDs:(id)arg1 selectedIndex:(long long)arg2;
- (id)initWithLanguages:(id)arg1 selectedIndex:(long long)arg2 actionHandler:(id /* block */)arg3;
- (id)inputSourceIDs;
- (bool)isEqual:(id)arg1;
- (bool)isInputSource;
- (long long)selectedIndex;
- (void)setInputSourceIDs:(id)arg1;
- (void)setIsInputSource:(bool)arg1;
- (void)setSelectedIndex:(long long)arg1;

@end
