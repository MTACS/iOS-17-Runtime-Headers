
@interface UIBarButtonItemAppearance : NSObject <NSCopying, NSSecureCoding> {
    <_UIBarButtonItemAppearanceChangeObserver> * _changeObserver;
    _UIBarButtonItemData * _data;
    UIBarButtonItemStateAppearance * _states;
}

@property (setter=_setChangeObserver:, nonatomic) <_UIBarButtonItemAppearanceChangeObserver> *_changeObserver;
@property (nonatomic, readonly) _UIBarButtonItemData *_data;
@property (setter=_setFallback:, nonatomic, retain) <_UIBarButtonItemDataFallback> *_fallback;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *disabled;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *focused;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *highlighted;
@property (nonatomic, readonly) UIBarButtonItemStateAppearance *normal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_changeObserver;
- (id)_data;
- (void)_describeInto:(id)arg1;
- (id)_fallback;
- (id)_proxyForState:(long long)arg1;
- (void)_resetBackIndicatorImages;
- (void)_setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;
- (void)_setChangeObserver:(id)arg1;
- (void)_setData:(id)arg1;
- (void)_setFallback:(id)arg1;
- (void)_updateDataTo:(id)arg1 signal:(bool)arg2;
- (void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:(id)arg1;
- (void)_writeToStorage:(id /* block */)arg1;
- (void)configureWithDefaultForStyle:(long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)disabled;
- (void)encodeWithCoder:(id)arg1;
- (id)focused;
- (unsigned long long)hash;
- (id)highlighted;
- (id)init;
- (id)initWithBarButtonItemAppearance:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)normal;

@end
