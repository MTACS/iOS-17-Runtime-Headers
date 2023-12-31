
@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSArray *stations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setActive:(bool)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setStations:(id)arg1;

@end
