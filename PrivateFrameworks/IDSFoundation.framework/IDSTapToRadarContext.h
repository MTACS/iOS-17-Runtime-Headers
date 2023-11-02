
@interface IDSTapToRadarContext : NSObject {
    NSDictionary * _rawContext;
}

- (void).cxx_destruct;
- (bool)_isValidClassification:(id)arg1;
- (bool)_isValidReproducibility:(id)arg1;
- (id)getTapToRadarURL;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 problemDescription:(id)arg2;

@end
