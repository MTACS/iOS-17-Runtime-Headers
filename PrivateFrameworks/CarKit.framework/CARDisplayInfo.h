
@interface CARDisplayInfo : NSObject {
    NSString * _identifier;
    NSArray * _oemPunchThroughs;
    struct CGSize { 
        double width; 
        double height; 
    }  _physicalSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    NSArray * _streams;
    bool  _supportsCarPlayContent;
    bool  _supportsInstrumentClusterContent;
    bool  _supportsMapContent;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *oemPunchThroughs;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) NSSet *punchThroughIdentifiers;
@property (nonatomic, readonly) NSArray *streams;
@property (nonatomic, readonly) bool supportsCarPlayContent;
@property (nonatomic, readonly) bool supportsInstrumentClusterContent;
@property (nonatomic, readonly) bool supportsMapContent;

- (void).cxx_destruct;
- (void)_updateOEMViews:(id)arg1;
- (id)description;
- (bool)hasPunchThroughWithIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithLogicalScreenDictionary:(id)arg1;
- (id)initWithPhysicalScreenDictionary:(id)arg1;
- (id)oemPunchThroughs;
- (struct CGPoint { double x1; double x2; })originForScreenInfoIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })physicalSize;
- (struct CGSize { double x1; double x2; })pixelSize;
- (id)punchThroughIdentifiers;
- (id)punchThroughWithIdentifier:(id)arg1;
- (id)streams;
- (bool)supportsCarPlayContent;
- (bool)supportsInstrumentClusterContent;
- (bool)supportsMapContent;
- (void)updateStreams:(id)arg1;

@end
