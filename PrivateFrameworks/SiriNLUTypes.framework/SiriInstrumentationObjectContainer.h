
@interface SiriInstrumentationObjectContainer : NSObject {
    SISchemaInstrumentationMessage * _mainItem;
    NSMutableArray * _tier1Events;
}

@property (nonatomic, retain) SISchemaInstrumentationMessage *mainItem;
@property (nonatomic, retain) NSMutableArray *tier1Events;

- (void).cxx_destruct;
- (void)addTier1Event:(id)arg1;
- (id)mainItem;
- (void)setMainItem:(id)arg1;
- (void)setTier1Events:(id)arg1;
- (id)tier1Events;

@end
