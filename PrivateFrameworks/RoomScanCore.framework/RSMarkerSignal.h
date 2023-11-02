
@interface RSMarkerSignal : NSObject {
    NSArray * _markers;
}

@property (nonatomic, readonly) NSArray *markers;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)markers;

@end
