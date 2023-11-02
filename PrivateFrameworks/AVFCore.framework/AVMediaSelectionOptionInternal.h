
@interface AVMediaSelectionOptionInternal : NSObject {
    NSString * _displayName;
    NSString * _displayNameLocaleIdentifier;
    NSArray * _groupMediaCharacteristics;
    NSArray * _optionMediaCharacteristics;
    AVDispatchOnce * _synthesizeMediaCharacteristicsOnce;
}

@end
