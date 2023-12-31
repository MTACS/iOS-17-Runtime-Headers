
@interface PARFlightResponse : PARResponse {
    NSArray * _flightResults;
}

@property (nonatomic, retain) NSArray *flightResults;

+ (id)_debugResponseFromReply:(id)arg1;
+ (id)responseFromReply:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)flightResults;
- (void)setFlightResults:(id)arg1;

@end
