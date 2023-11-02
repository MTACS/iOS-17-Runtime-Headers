
@interface MKTransitItemIncidentsController : NSObject {
    NSSet * _blockedIncidentEntities;
    NSMutableDictionary * _incidentsForDepartureSequence;
    NSMutableDictionary * _incidentsForLine;
    NSMutableDictionary * _incidentsForLinesInSystem;
    NSMutableDictionary * _incidentsForMapItem;
    NSMutableDictionary * _incidentsForSystem;
    <GEOTransitLineItem> * _lineItem;
    MKMapItem * _mapItem;
    NSDate * _referenceDate;
    NSArray * _validIncidents;
}

@property (nonatomic, retain) NSDate *referenceDate;

- (void).cxx_destruct;
- (id)_incidentsAffectingMuid:(unsigned long long)arg1;
- (id)blockedIncidentEntities;
- (id)incidentsForDepartureSequence:(id)arg1;
- (id)incidentsForLine:(id)arg1;
- (id)incidentsForLinesInSystem:(id)arg1;
- (id)incidentsForMapItem:(id)arg1;
- (id)incidentsForSystem:(id)arg1;
- (id)initWithLineItem:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)referenceDate;
- (void)resetCache;
- (void)setReferenceDate:(id)arg1;
- (id)validIncidents;

@end
