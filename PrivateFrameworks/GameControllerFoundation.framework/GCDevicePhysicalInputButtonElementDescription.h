
@interface GCDevicePhysicalInputButtonElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding> {
    bool  _analog;
    unsigned long long  _eventPressedValueField;
    float  _pressedThreshold;
    NSArray * _sources;
}

@property (getter=isAnalog, nonatomic) bool analog;
@property (nonatomic) unsigned long long eventPressedValueField;
@property (nonatomic) float pressedThreshold;
@property (nonatomic, copy) NSArray *sources;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventPressedValueField;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAnalog;
- (bool)isEqual:(id)arg1;
- (float)pressedThreshold;
- (void)setAnalog:(bool)arg1;
- (void)setEventPressedValueField:(unsigned long long)arg1;
- (void)setPressedThreshold:(float)arg1;
- (void)setSources:(id)arg1;
- (id)sources;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)parametersClass;

- (id)makeParameters;

@end
