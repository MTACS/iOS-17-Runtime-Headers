
@interface PTCinematographyNetworkNamedSignal : PTCinematographyNetworkSignal {
    bool  _flatten;
}

@property (readonly) bool flatten;

- (id)_flattenArray:(id)arg1;
- (void)_flattenArray:(id)arg1 toMutableArray:(id)arg2;
- (bool)flatten;
- (id)initWithModelDictionary:(id)arg1;
- (void)writePayload:(id)arg1 toStream:(id)arg2;

@end
