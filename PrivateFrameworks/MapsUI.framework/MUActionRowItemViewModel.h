
@interface MUActionRowItemViewModel : NSObject {
    NSString * _accessibilityIdentifier;
    UIView * _accessoryView;
    bool  _enabled;
    MUFeatureDiscoveryAnnotationView * _featureDiscoveryView;
    bool  _hidden;
    GEOObserverHashTable * _observers;
    UIColor * _preferredBackgroundColor;
    UIColor * _preferredTintColor;
    bool  _selected;
    NSString * _symbolName;
    NSString * _titleText;
}

@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) UIView *accessoryView;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, retain) MUFeatureDiscoveryAnnotationView *featureDiscoveryView;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) UIColor *preferredBackgroundColor;
@property (nonatomic, readonly) UIColor *preferredTintColor;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *titleText;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (id)accessibilityIdentifier;
- (id)accessoryView;
- (void)addObserver:(id)arg1;
- (id)analyticsButtonValue;
- (id)analyticsButtonValues;
- (id)buildMenuWithPresentationOptions:(id)arg1;
- (id)featureDiscoveryView;
- (id)init;
- (bool)isEnabled;
- (bool)isHidden;
- (bool)isSelected;
- (id)preferredBackgroundColor;
- (id)preferredTintColor;
- (void)removeObserver:(id)arg1;
- (void)setFeatureDiscoveryView:(id)arg1;
- (id)symbolName;
- (id)titleText;

@end
