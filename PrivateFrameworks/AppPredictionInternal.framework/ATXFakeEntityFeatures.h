
@interface ATXFakeEntityFeatures : NSObject <ATXJSONSerializableProtocol> {
    NSMutableArray * _identifiersAndDates;
}

@property (nonatomic, retain) NSMutableArray *identifiersAndDates;

- (void).cxx_destruct;
- (id)identifiersAndDates;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)jsonRepresentation;
- (void)setIdentifiersAndDates:(id)arg1;

@end
