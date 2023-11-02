
@interface AISConfigurationStore : NSObject <AISChildSetupStoreProtocol> {
    void cachedChildCutOffResponse;
}

@property (nonatomic, retain) AISChildAccountCutOffAgeResponse *cachedChildCutOffResponse;

- (void).cxx_destruct;
- (id)cachedChildCutOffResponse;
- (void)fetchMaxAgeForChildAccountWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 40: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned int, unsigned short, unsigned char, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, int, long, double, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, out /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, bycopy float, float, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out in short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (void)setCachedChildCutOffResponse:(id)arg1;

@end
