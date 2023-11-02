
@interface HUHomeEnergyManagerHelper : NSObject {
    void home;
}

@property (nonatomic, readonly) bool effectiveHomeEnergyAvailable;
@property (nonatomic, readonly) bool hasLoadedHomeEnergyAvailable;
@property (nonatomic, readonly) bool isHomeEnergyEnabled;
@property (nonatomic, readonly) bool isHomeEnergyVisible;

- (void).cxx_destruct;
- (bool)effectiveHomeEnergyAvailable;
- (void)fetchEnergyAdviceWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)hasLoadedHomeEnergyAvailable;
- (id)init;
- (id)initWithHome:(id)arg1;
- (bool)isHomeEnergyEnabled;
- (bool)isHomeEnergyVisible;
- (void)updateContextWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)updateIsHomeEnergyEnabledWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
