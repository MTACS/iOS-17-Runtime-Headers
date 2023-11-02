
@interface HUQuickControlViewProfile : NSObject <NSCopying> {
    unsigned long long  _controlSize;
    <HFIconDescriptor> * _decorationIconDescriptor;
    unsigned long long  _orientation;
    <HFDynamicFormattingValue> * _supplementaryFormattedValue;
    unsigned long long  _suspendedState;
    UIColor * _tintColor;
}

@property (nonatomic) unsigned long long controlSize;
@property (nonatomic, retain) <HFIconDescriptor> *decorationIconDescriptor;
@property (nonatomic, readonly) double gestureDragCoefficient;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic, retain) <HFDynamicFormattingValue> *supplementaryFormattedValue;
@property (nonatomic, readonly) bool supportsTouchContinuation;
@property (nonatomic) unsigned long long suspendedState;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (unsigned long long)controlSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationIconDescriptor;
- (double)gestureDragCoefficient;
- (unsigned long long)orientation;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setDecorationIconDescriptor:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setSupplementaryFormattedValue:(id)arg1;
- (void)setSuspendedState:(unsigned long long)arg1;
- (void)setTintColor:(id)arg1;
- (id)supplementaryFormattedValue;
- (bool)supportsTouchContinuation;
- (unsigned long long)suspendedState;
- (id)tintColor;

@end
