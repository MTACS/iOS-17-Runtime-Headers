
@interface HFCharacteristicWriteActionBuilder : HFActionBuilder {
    HMCharacteristic * _characteristic;
    <NSCopying> * _targetValue;
}

@property (nonatomic, readonly) HMCharacteristicWriteAction *action;
@property (nonatomic, retain) HMCharacteristic *characteristic;
@property (nonatomic, retain) <NSCopying> *targetValue;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (bool)canUpdateWithActionBuilder:(id)arg1;
- (id)characteristic;
- (id)commitItem;
- (id)compareToObject:(id)arg1;
- (id)containedAccessoryRepresentables;
- (id)copyForCreatingNewAction;
- (id)createNewAction;
- (id)description;
- (bool)hasSameTargetAsAction:(id)arg1;
- (unsigned long long)hash;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)performValidation;
- (bool)requiresDeviceUnlock;
- (void)setCharacteristic:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (id)targetValue;
- (bool)updateWithActionBuilder:(id)arg1;
- (id)validationError;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)initWithHome:(id)arg1 characteristic:(id)arg2;

@end
