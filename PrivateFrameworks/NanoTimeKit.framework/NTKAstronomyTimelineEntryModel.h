
@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel {
    CLLocation * _anyLocation;
    NSDate * _currentDate;
    CLLocation * _currentLocation;
    unsigned long long  _vista;
}

@property (nonatomic, readonly) CLLocation *anyLocation;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (nonatomic, readonly) unsigned long long vista;

- (void).cxx_destruct;
- (id)_graphicRectangular;
- (id)anyLocation;
- (id)currentDate;
- (id)currentLocation;
- (id)initWithVista:(unsigned long long)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5;
- (id)templateForComplicationFamily:(long long)arg1;
- (unsigned long long)vista;

@end
