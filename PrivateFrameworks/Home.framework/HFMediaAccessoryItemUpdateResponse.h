
@interface HFMediaAccessoryItemUpdateResponse : NSObject {
    HFCharacteristicValueDisplayMetadata * _displayMetadata;
    NSDictionary * _standardResults;
}

@property (nonatomic, readonly) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (nonatomic, readonly) NSDictionary *standardResults;

- (void).cxx_destruct;
- (id)displayMetadata;
- (id)initWithDisplayMetadata:(id)arg1 standardResults:(id)arg2;
- (id)standardResults;

@end
