
@interface WFToggleFocusModeContextualActionFocusMode : NSObject <NSSecureCoding> {
    NSString * _colorName;
    NSString * _identifier;
    NSString * _name;
    NSString * _symbolName;
}

@property (nonatomic, readonly, copy) NSString *colorName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *symbolName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)colorName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 symbolName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 symbolName:(id)arg3 colorName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)symbolName;

@end
