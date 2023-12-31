
@interface MPRadioRecentStationsGroup : NSObject <NSSecureCoding> {
    NSString * _localizedTitle;
    NSArray * _stations;
}

@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSArray *stations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedTitle;
- (void)setLocalizedTitle:(id)arg1;
- (void)setStations:(id)arg1;
- (id)stations;

@end
