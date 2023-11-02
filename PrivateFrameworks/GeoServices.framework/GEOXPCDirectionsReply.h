
@interface GEOXPCDirectionsReply : GEOXPCReply <GEOXPCReply> {
    GEODirectionsError * _directionsError;
    GEODirectionsResponse * _directionsResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEODirectionsError *directionsError;
@property (nonatomic, retain) GEODirectionsResponse *directionsResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)directionsError;
- (id)directionsResponse;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setDirectionsError:(id)arg1;
- (void)setDirectionsResponse:(id)arg1;

@end
