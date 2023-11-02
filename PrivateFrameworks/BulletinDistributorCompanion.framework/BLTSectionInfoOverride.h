
@interface BLTSectionInfoOverride : NSObject {
    NSNumber * _criticalAlert;
    NSNumber * _grouping;
    NSNumber * _level;
    NSNumber * _sound;
}

@property (nonatomic, retain) NSNumber *criticalAlert;
@property (nonatomic, retain) NSNumber *grouping;
@property (nonatomic, retain) NSNumber *level;
@property (nonatomic, retain) NSNumber *sound;

- (void).cxx_destruct;
- (id)criticalAlert;
- (id)grouping;
- (id)initWithOverrides:(id)arg1;
- (id)level;
- (void)setCriticalAlert:(id)arg1;
- (void)setGrouping:(id)arg1;
- (void)setLevel:(id)arg1;
- (void)setSound:(id)arg1;
- (id)sound;

@end
