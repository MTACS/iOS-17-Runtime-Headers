
@interface HFActionSetServiceSuggestionMetadata : NSObject {
    NSString * _primaryCharacteristicType;
    NSArray * _secondaryCharacteristicTypes;
    NSString * _serviceType;
}

@property (nonatomic, readonly) NSString *primaryCharacteristicType;
@property (nonatomic, readonly) NSArray *secondaryCharacteristicTypes;
@property (nonatomic, readonly) NSString *serviceType;

+ (id)metadataForServiceType:(id)arg1;

- (void).cxx_destruct;
- (id)initWithServiceType:(id)arg1 primaryCharacteristicType:(id)arg2 secondaryCharacteristicTypes:(id)arg3;
- (id)primaryCharacteristicType;
- (id)secondaryCharacteristicTypes;
- (id)serviceType;

@end
