
@interface AXAuditObjectTransportInfo : NSObject {
    id /* block */  _canEncodeObjectBlock;
    id /* block */  _createLocalObjectBlock;
    id /* block */  _createTransportObjectBlock;
    bool  _requiresRawTransportDictionary;
    NSString * _transportKey;
}

@property (nonatomic, copy) id /* block */ canEncodeObjectBlock;
@property (nonatomic, copy) id /* block */ createLocalObjectBlock;
@property (nonatomic, copy) id /* block */ createTransportObjectBlock;
@property (nonatomic) bool requiresRawTransportDictionary;
@property (nonatomic, retain) NSString *transportKey;

- (void).cxx_destruct;
- (id /* block */)canEncodeObjectBlock;
- (id /* block */)createLocalObjectBlock;
- (id /* block */)createTransportObjectBlock;
- (id)initWithTransportKey:(id)arg1;
- (bool)requiresRawTransportDictionary;
- (void)setCanEncodeObjectBlock:(id /* block */)arg1;
- (void)setCreateLocalObjectBlock:(id /* block */)arg1;
- (void)setCreateTransportObjectBlock:(id /* block */)arg1;
- (void)setRequiresRawTransportDictionary:(bool)arg1;
- (void)setTransportKey:(id)arg1;
- (id)transportKey;

@end
