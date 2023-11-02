
@protocol GCDirectionPadElement <GCPhysicalInputElement>

@required

- (<GCLinearInput><GCPressedStateInput> *)down;
- (<GCLinearInput><GCPressedStateInput> *)left;
- (<GCLinearInput><GCPressedStateInput> *)right;
- (<GCLinearInput><GCPressedStateInput> *)up;
- (<GCAxisInput> *)xAxis;
- (<GCAxisInput> *)yAxis;

@end
