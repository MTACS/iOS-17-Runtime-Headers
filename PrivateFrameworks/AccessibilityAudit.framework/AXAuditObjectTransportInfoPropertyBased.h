
@interface AXAuditObjectTransportInfoPropertyBased : AXAuditObjectTransportInfo {
    NSMutableArray * __propertyEntries;
    Class  _entryClass;
}

@property (nonatomic, retain) NSMutableArray *_propertyEntries;
@property (nonatomic, retain) Class entryClass;
@property (nonatomic, readonly) NSArray *propertyEntries;

- (void).cxx_destruct;
- (void)_initializeBlocks;
- (id)_propertyEntries;
- (void)addPropertyEntry:(id)arg1;
- (Class)entryClass;
- (id)init;
- (id)initWithClass:(Class)arg1 transportKey:(id)arg2;
- (id)propertyEntries;
- (void)setEntryClass:(Class)arg1;
- (void)set_propertyEntries:(id)arg1;

@end
