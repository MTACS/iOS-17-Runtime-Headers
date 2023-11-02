
@interface SGRealtimeWalletPass : NSObject <NSCopying, NSSecureCoding, SGRealtimeSuggestion> {
    NSString * _identifier;
    int  _state;
    NSData * _walletPassData;
    NSData * _walletPassDictionaryData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *walletPassData;
@property (nonatomic, readonly) NSData *walletPassDictionaryData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initRealtimeWalletPassForState:(int)arg1 identifier:(id)arg2 walletPassDictionary:(id)arg3 walletPassData:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeWalletPass:(id)arg1;
- (int)state;
- (id)walletPassData;
- (id)walletPassDictionary;
- (id)walletPassDictionaryData;

@end
