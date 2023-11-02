
@interface IDSCarrierToken : NSObject {
    NSString * _tokenString;
}

@property (nonatomic, readonly) NSString *tokenString;

- (void).cxx_destruct;
- (id)initWithTokenString:(id)arg1;
- (id)tokenString;

@end
