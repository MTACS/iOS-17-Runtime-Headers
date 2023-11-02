
@interface ICASPaletteEngagementData : NSObject <AADataEventType> {
    ICASPaletteEngagementType * _paletteEngagementType;
}

@property (nonatomic, readonly) ICASPaletteEngagementType *paletteEngagementType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithPaletteEngagementType:(id)arg1;
- (id)paletteEngagementType;
- (id)toDict;

@end
