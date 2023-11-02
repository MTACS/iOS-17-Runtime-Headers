
@protocol GCButtonElement <GCPhysicalInputElement>

@required

- (<GCPressedStateInput><GCLinearInput> *)pressedInput;
- (<GCTouchedStateInput> *)touchedInput;

@end
