
@interface PTCinematographyNetworkLabelSignal : PTCinematographyNetworkSignal {
    long long  _labelOffset;
    unsigned long long  _labelZero;
    NSDictionary * _remap;
}

@property (readonly) long long labelOffset;
@property (readonly) unsigned long long labelZero;
@property (readonly) NSDictionary *remap;

- (void).cxx_destruct;
- (unsigned long long)_networkLabelForDetection:(id)arg1;
- (id)initWithModelDictionary:(id)arg1;
- (long long)labelOffset;
- (unsigned long long)labelZero;
- (id)remap;
- (void)writePayload:(id)arg1 toStream:(id)arg2;

@end
