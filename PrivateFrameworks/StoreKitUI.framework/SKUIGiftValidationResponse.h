
@interface SKUIGiftValidationResponse : NSObject {
    NSString * _errorString;
    NSString * _giftKey;
    NSString * _totalGiftAmountString;
    bool  _valid;
}

@property (nonatomic, readonly) NSString *errorString;
@property (nonatomic, readonly) NSString *giftKey;
@property (nonatomic, readonly) NSString *totalGiftAmountString;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)errorString;
- (id)giftKey;
- (id)initWithValidationDictionary:(id)arg1;
- (bool)isValid;
- (id)totalGiftAmountString;

@end
