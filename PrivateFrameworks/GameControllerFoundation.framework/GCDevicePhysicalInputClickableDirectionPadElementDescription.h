
@interface GCDevicePhysicalInputClickableDirectionPadElementDescription : GCDevicePhysicalInputDirectionPadElementDescription <NSSecureCoding> {
    unsigned long long  _eventPressedValueField;
    NSArray * _pressedSources;
}

@property (nonatomic) unsigned long long eventPressedValueField;
@property (nonatomic, copy) NSArray *pressedSources;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventPressedValueField;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pressedSources;
- (void)setEventPressedValueField:(unsigned long long)arg1;
- (void)setPressedSources:(id)arg1;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)parametersClass;

- (id)makeParameters;

@end
