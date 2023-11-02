
@interface EKSeriesDetails : NSObject <NSCopying> {
    NSArray * _detachedEvents;
    NSSet * _exceptionDates;
    EKEvent * _masterEvent;
}

@property (retain) NSArray *detachedEvents;
@property (retain) NSSet *exceptionDates;
@property (retain) EKEvent *masterEvent;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detachedEvents;
- (id)exceptionDates;
- (id)initWithEvent:(id)arg1;
- (id)initWithMasterEvent:(id)arg1 detachedEvents:(id)arg2 exceptionDates:(id)arg3;
- (id)masterEvent;
- (void)setDetachedEvents:(id)arg1;
- (void)setExceptionDates:(id)arg1;
- (void)setMasterEvent:(id)arg1;

@end
