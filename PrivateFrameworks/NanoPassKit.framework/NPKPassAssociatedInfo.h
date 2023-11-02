
@interface NPKPassAssociatedInfo : NSObject {
    NSArray * _balanceFields;
    NSArray * _commutePlanFields;
    unsigned long long  _rangingSuspensionReason;
    NSArray * _tiles;
    PKTransitAppletState * _transitAppletState;
    PKTransitPassProperties * _transitProperties;
}

@property (nonatomic, readonly) NSArray *balanceFields;
@property (nonatomic, readonly) NSArray *commutePlanFields;
@property (nonatomic, readonly) unsigned long long rangingSuspensionReason;
@property (nonatomic, readonly) NSArray *tiles;
@property (nonatomic, readonly) PKTransitAppletState *transitAppletState;
@property (nonatomic, readonly) PKTransitPassProperties *transitProperties;

- (void).cxx_destruct;
- (id)balanceFields;
- (id)commutePlanFields;
- (id)description;
- (id)initWithTransitProperties:(id)arg1 appletState:(id)arg2 balanceFields:(id)arg3 commutePlanFields:(id)arg4 tiles:(id)arg5 rangingSuspensionReason:(unsigned long long)arg6;
- (unsigned long long)rangingSuspensionReason;
- (id)tiles;
- (id)transitAppletState;
- (id)transitProperties;

@end
