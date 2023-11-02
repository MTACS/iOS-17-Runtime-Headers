
@interface ICAddToWishListResponse : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResponseDictionary:(id)arg1;
- (id)message;
- (long long)statusCode;

@end
