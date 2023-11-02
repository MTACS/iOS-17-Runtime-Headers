
@interface DCCityMapperURLGenerator : DCMapsURLGenerator {
    NSString * _endCoordinate;
    NSString * _startCoordinate;
}

@property (nonatomic, retain) NSString *endCoordinate;
@property (nonatomic, retain) NSString *startCoordinate;

+ (void)generateURLWithMapsLink:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)endCoordinate;
- (id)host;
- (id)path;
- (void)populateQueryDictionary;
- (id)scheme;
- (void)setEndCoordinate:(id)arg1;
- (void)setStartCoordinate:(id)arg1;
- (id)startCoordinate;

@end
