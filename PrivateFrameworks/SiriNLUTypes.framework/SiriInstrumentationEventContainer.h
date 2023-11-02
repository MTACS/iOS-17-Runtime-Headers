
@interface SiriInstrumentationEventContainer : NSObject {
    NLXSchemaNLXClientEvent * _mainEvent;
    NSArray * _tier1Events;
}

@property (nonatomic, retain) NLXSchemaNLXClientEvent *mainEvent;
@property (nonatomic, retain) NSArray *tier1Events;

- (void).cxx_destruct;
- (id)mainEvent;
- (void)setMainEvent:(id)arg1;
- (void)setTier1Events:(id)arg1;
- (id)tier1Events;

@end
