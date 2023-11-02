
@interface AXAuditTextMarker : NSObject <AXAuditTransportableObjectProtocol> {
    NSString * _markerDescription;
    id  _platformMarker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *markerDescription;
@property (nonatomic, retain) id platformMarker;
@property (readonly) Class superclass;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)markerDescription;
- (id)platformMarker;
- (void)setMarkerDescription:(id)arg1;
- (void)setPlatformMarker:(id)arg1;

@end
