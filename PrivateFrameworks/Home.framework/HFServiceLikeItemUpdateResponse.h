
@interface HFServiceLikeItemUpdateResponse : NSObject {
    HFCharacteristicValueDisplayMetadata * _displayMetadata;
    HFCharacteristicBatchReadResponse * _readResponse;
    NSDictionary * _standardResults;
}

@property (nonatomic, readonly) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (nonatomic, readonly) HFCharacteristicBatchReadResponse *readResponse;
@property (nonatomic, readonly) NSDictionary *standardResults;

- (void).cxx_destruct;
- (id)displayMetadata;
- (id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3;
- (id)readResponse;
- (id)standardResults;

@end
