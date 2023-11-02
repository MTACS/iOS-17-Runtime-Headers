
@interface NSPPrivateAccessTokenChallenge : NSObject {
    NSData * _challengeData;
    NSString * _issuerName;
    NSString * _originInfo;
    NSString * _originName;
    NSArray * _originNames;
    NSData * _redemptionNonce;
    unsigned short  _tokenType;
}

@property (readonly) bool isSupportedTokenType;
@property (readonly) NSString *issuerName;
@property (readonly) NSString *originName;
@property (readonly) NSArray *originNames;
@property (readonly) NSData *redemptionNonce;
@property (readonly) unsigned short tokenType;
@property (readonly) bool typeHasAllowedOriginList;
@property (readonly) bool typeRequiresOriginName;
@property (readonly) bool typeRequiresRedemptionNonce;

+ (id)challengeAttributeName;
+ (id)httpAuthenticationScheme;
+ (id)originNameKeyAttributeName;
+ (id)tokenKeyAttributeName;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (bool)isSupportedTokenType;
- (id)issuerName;
- (id)originName;
- (id)originNames;
- (id)redemptionNonce;
- (unsigned short)tokenType;
- (bool)typeHasAllowedOriginList;
- (bool)typeRequiresOriginName;
- (bool)typeRequiresRedemptionNonce;

@end
