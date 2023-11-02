
@interface PXGadgetSection : NSObject {
    long long  _changeCount;
    PXGadgetSpec * _gadgetSpec;
    NSArray * _gadgets;
    NSString * _identifier;
    PXGadgetSectionHeader * _sectionHeader;
}

@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) NSArray *gadgets;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) PXGadgetSectionHeader *sectionHeader;

- (void).cxx_destruct;
- (id)description;
- (id)gadgetSpec;
- (id)gadgets;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 gadgets:(id)arg2;
- (id)sectionHeader;
- (void)setGadgetSpec:(id)arg1;

@end
