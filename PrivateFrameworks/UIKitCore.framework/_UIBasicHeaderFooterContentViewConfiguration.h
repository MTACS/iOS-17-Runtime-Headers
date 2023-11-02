
@interface _UIBasicHeaderFooterContentViewConfiguration : NSObject <NSSecureCoding, _UIContentViewConfiguration> {
    unsigned long long  _axesPreservingSuperviewLayoutMargins;
    struct { 
        unsigned int hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; 
        unsigned int hasCustomizedDirectionalLayoutMargins : 1; 
    }  _configurationFlags;
    long long  _defaultStyle;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _directionalLayoutMargins;
    _UIContentViewLabelConfiguration * _textLabel;
}

@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalLayoutMargins;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool resetsVerticalLayoutMargins;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIContentViewLabelConfiguration *textLabel;

+ (id)defaultFooterConfiguration;
+ (id)defaultGroupedFooterConfiguration;
+ (id)defaultGroupedHeaderConfiguration;
+ (id)defaultHeaderConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToContentView:(id)arg1;
- (unsigned long long)axesPreservingSuperviewLayoutMargins;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createContentView;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)resetsVerticalLayoutMargins;
- (void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResetsVerticalLayoutMargins:(bool)arg1;
- (id)textLabel;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2;

@end
