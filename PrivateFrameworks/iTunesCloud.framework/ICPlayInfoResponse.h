
@interface ICPlayInfoResponse : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) NSData *playInfoData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (id)playInfoData;

@end
