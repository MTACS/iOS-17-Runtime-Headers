
@interface SBSColorGroup : NSObject <NSSecureCoding> {
    SBSColor * _background;
    SBSColor * _primaryText;
    SBSColor * _secondaryText;
}

@property (nonatomic, readonly) SBSColor *background;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) SBSColor *primaryText;
@property (nonatomic, readonly) SBSColor *secondaryText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)background;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackground:(id)arg1 primaryText:(id)arg2 secondaryText:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)primaryText;
- (id)secondaryText;

@end
