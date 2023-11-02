
@interface UIViewConfigurationState : NSObject <UIConfigurationState, _UIViewConfigurationStateReadonly> {
    NSMutableDictionary * _customStates;
    unsigned long long  _mutations;
    struct { 
        unsigned int isDisabled : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int isSelected : 1; 
        unsigned int isFocused : 1; 
        unsigned int isPinned : 1; 
    }  _stateFlags;
    UITraitCollection * _traitCollection;
}

@property (setter=_setContextMenuGroupLocation:, nonatomic) long long _contextMenuGroupLocation;
@property (nonatomic, readonly) unsigned long long _mutations;
@property (nonatomic, readonly) unsigned long long _viewConfigurationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (getter=isFocused, nonatomic) bool focused;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isPinned, nonatomic) bool pinned;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendPropertiesForDescription:(id)arg1;
- (void)_configureWithViewConfigurationState:(unsigned long long)arg1;
- (long long)_contextMenuGroupLocation;
- (id)_customStatesForSwiftBridging;
- (id)_initWithState:(id)arg1;
- (unsigned long long)_mutations;
- (void)_setContextMenuGroupLocation:(long long)arg1;
- (void)_setSwiftBridgingCustomState:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_viewConfigurationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customStateForKey:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isFocused;
- (bool)isHighlighted;
- (bool)isPinned;
- (bool)isSelected;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setCustomState:(id)arg1 forKey:(id)arg2;
- (void)setDisabled:(bool)arg1;
- (void)setFocused:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setPinned:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;

@end
