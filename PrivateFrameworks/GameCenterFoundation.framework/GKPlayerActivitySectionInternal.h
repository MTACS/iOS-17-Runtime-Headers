
@interface GKPlayerActivitySectionInternal : GKInternalRepresentation {
    NSString * _instrumentationKey;
    NSArray * _items;
    NSString * _title;
}

@property (nonatomic, retain) NSString *instrumentationKey;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSString *title;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)instrumentationKey;
- (id)items;
- (void)setInstrumentationKey:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
