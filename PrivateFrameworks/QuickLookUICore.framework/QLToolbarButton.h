
@interface QLToolbarButton : NSObject <NSSecureCoding> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __additionalSelectionInsets;
    NSString * _accessibilityIdentifier;
    SEL  _action;
    UIAlertController * _alertController;
    QLToolbarButtonItemRepresentation * _currentItemRepresentation;
    bool  _disappearsOnTap;
    bool  _enabled;
    bool  _forceToNavBar;
    NSString * _identifier;
    NSArray * _options;
    unsigned long long  _placement;
    bool  _roundedSelectedIndicator;
    bool  _selected;
    NSString * _symbolImageName;
    long long  _systemItem;
    id  _target;
    NSString * _title;
    bool  _useBundleImage;
    bool  _useInternalSymbolImage;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;
@property (copy) NSString *accessibilityIdentifier;
@property bool disappearsOnTap;
@property bool enabled;
@property bool forceToNavBar;
@property (readonly) NSString *identifier;
@property (copy) NSArray *options;
@property unsigned long long placement;
@property bool roundedSelectedIndicator;
@property bool selected;
@property (nonatomic, copy) NSString *symbolImageName;
@property long long systemItem;
@property (copy) NSString *title;
@property bool useBundleImage;
@property bool useInternalSymbolImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (id)_barButtonImage;
- (id)accessibilityIdentifier;
- (id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)disappearsOnTap;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceToNavBar;
- (void)handleLongPress:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateCurrentState;
- (bool)isEqual:(id)arg1;
- (id)options;
- (unsigned long long)placement;
- (bool)roundedSelectedIndicator;
- (bool)selected;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setDisappearsOnTap:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setForceToNavBar:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setRoundedSelectedIndicator:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setSystemItem:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseBundleImage:(bool)arg1;
- (void)setUseInternalSymbolImage:(bool)arg1;
- (void)set_additionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)symbolImageName;
- (long long)systemItem;
- (id)title;
- (bool)useBundleImage;
- (bool)useInternalSymbolImage;

@end
