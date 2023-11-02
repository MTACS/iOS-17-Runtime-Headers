
@interface PTCinematographyNetworkRectSignal : PTCinematographyNetworkSignal {
    bool  _useSqrtForArea;
}

@property bool useSqrtForArea;

- (id)initWithModelDictionary:(id)arg1;
- (void)setUseSqrtForArea:(bool)arg1;
- (bool)useSqrtForArea;
- (void)writePayload:(id)arg1 toStream:(id)arg2;

@end
