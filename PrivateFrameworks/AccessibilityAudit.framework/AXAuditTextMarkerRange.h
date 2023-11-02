
@interface AXAuditTextMarkerRange : NSObject <AXAuditTransportableObjectProtocol> {
    AXAuditTextMarker * _endMarker;
    NSString * _markerRangeDescription;
    AXAuditTextMarker * _startMarker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXAuditTextMarker *endMarker;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *markerRangeDescription;
@property (nonatomic, retain) AXAuditTextMarker *startMarker;
@property (readonly) Class superclass;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endMarker;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)markerRangeDescription;
- (void)setEndMarker:(id)arg1;
- (void)setMarkerRangeDescription:(id)arg1;
- (void)setStartMarker:(id)arg1;
- (id)startMarker;

@end
