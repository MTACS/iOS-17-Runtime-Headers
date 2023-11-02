
@interface WFFocusMode : NSObject <NSSecureCoding, WFNaming> {
    NSString * _colorName;
    NSString * _displayName;
    NSString * _identifier;
    NSString * _symbolName;
}

@property (nonatomic, readonly) NSString *colorName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WFImage *symbolImage;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colorName;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFCActivityDescribing:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 symbolName:(id)arg3 colorName:(id)arg4;
- (id)symbolImage;
- (id)symbolName;
- (id)wfName;

@end
