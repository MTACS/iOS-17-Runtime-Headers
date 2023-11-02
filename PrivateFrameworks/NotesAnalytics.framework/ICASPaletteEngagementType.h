
@interface ICASPaletteEngagementType : NSObject <AADataType> {
    long long  _paletteEngagementType;
}

@property (nonatomic, readonly) long long paletteEngagementType;

- (id)initWithPaletteEngagementType:(long long)arg1;
- (long long)paletteEngagementType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
