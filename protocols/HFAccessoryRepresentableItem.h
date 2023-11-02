
@protocol HFAccessoryRepresentableItem <HFHomeKitItemProtocol>

@required

+ (id)itemWithAccessoryRepresentableObject:(id <HFAccessoryRepresentable>)arg1 valueSource:(id <HFCharacteristicValueSource>)arg2;

- (<HFAccessoryRepresentable> *)accessoryRepresentableObject;

@end
