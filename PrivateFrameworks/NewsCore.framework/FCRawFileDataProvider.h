
@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider> {
    NSString * _filePath;
    FCInterestToken * _holdToken;
    bool  _isRawFileConsumable;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) FCInterestToken *holdToken;
@property (nonatomic, readonly) bool isRawFileConsumable;

- (void).cxx_destruct;
- (id)data;
- (id)filePath;
- (id)holdToken;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 holdToken:(id)arg2;
- (bool)isRawFileConsumable;

@end
