
@interface SGRealtimeWalletOrder : NSObject <NSCopying, NSSecureCoding, SGRealtimeSuggestion> {
    NSString * _identifier;
    int  _state;
    NSData * _walletOrderData;
    NSData * _walletOrderDictData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *walletOrderData;
@property (nonatomic, readonly) NSData *walletOrderDictData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initRealtimeWalletOrderForState:(int)arg1 identifier:(id)arg2 walletOrderDictionary:(id)arg3 walletOrderData:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeWalletOrder:(id)arg1;
- (int)state;
- (id)walletOrderData;
- (id)walletOrderDictData;
- (id)walletOrderDictionary;

@end
