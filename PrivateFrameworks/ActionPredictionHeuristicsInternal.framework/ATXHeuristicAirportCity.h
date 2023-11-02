
@interface ATXHeuristicAirportCity : NSObject {
    NSString * _iata;
    NSString * _isoLanguage;
    double  _latitude;
    double  _longitude;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *iata;
@property (nonatomic, readonly) NSString *isoLanguage;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSString *name;

+ (id)cityForAirport:(id)arg1;
+ (id)cityForAirport:(id)arg1 language:(id)arg2;
+ (id)supportedLanguages;

- (void).cxx_destruct;
- (id)iata;
- (id)isoLanguage;
- (double)latitude;
- (double)longitude;
- (id)name;

@end
