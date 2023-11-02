
@interface GDGeoHashVisitUtility : NSObject {
    BMStream * _geoHashStream;
}

- (void).cxx_destruct;
- (id)_rawGeoHashVisitEventPublisherFrom:(id)arg1 to:(id)arg2 maxEvents:(unsigned long long)arg3 lastN:(unsigned long long)arg4 reversed:(bool)arg5 level:(long long)arg6;
- (id)_rawGeoHashVisitEventPublisherFrom:(id)arg1 to:(id)arg2 reversed:(bool)arg3 level:(long long)arg4;
- (id)geoHashVisitEventPublisherFrom:(id)arg1 to:(id)arg2 level:(long long)arg3;
- (id)initWithGeoHashStream:(id)arg1;
- (id)lastGeoHashVisitEventAt:(id)arg1 level:(long long)arg2;

@end
