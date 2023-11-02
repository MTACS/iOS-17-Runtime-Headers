
@interface PGResolvablePublicEventBusinessItem : NSObject {
    unsigned long long  _businessItemMuid;
    PGConsolidatedAddress * _consolidatedAddress;
    PGGraphPublicEventNode * _publicEventNode;
}

@property (nonatomic, readonly) unsigned long long businessItemMuid;
@property (nonatomic, readonly) PGConsolidatedAddress *consolidatedAddress;
@property (nonatomic, readonly) PGGraphPublicEventNode *publicEventNode;

- (void).cxx_destruct;
- (unsigned long long)businessItemMuid;
- (id)consolidatedAddress;
- (id)initWithPublicEventNode:(id)arg1 consolidatedAddress:(id)arg2 businessItemMuid:(unsigned long long)arg3;
- (id)publicEventNode;

@end
