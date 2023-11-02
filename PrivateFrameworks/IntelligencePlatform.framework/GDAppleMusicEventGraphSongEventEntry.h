
@interface GDAppleMusicEventGraphSongEventEntry : NSObject {
    NSDate * _endDate;
    GDGraphSongEventEntityIdentifier * _entityIdentifier;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) GDGraphSongEventEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)entityIdentifier;
- (id)initWithEntityIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)startDate;

@end
