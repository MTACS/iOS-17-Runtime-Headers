
@interface QOSToolkit.TVPlaybackErrorMessage : _TtCs12_SwiftObject <ObjcQOSErrorMessageProtocolInternal> {
    void config;
    void defaultAlert;
    void logger;
    void metricsRecorder;
    void service;
}

@property (nonatomic, readonly) id /* block */ defaultAlert;
@property (nonatomic, readonly) id /* block */ logger;
@property (nonatomic, readonly) id /* block */ metricsRecorder;

- (id /* block */)defaultAlert;
- (void)fetchLocalizedErrorMessageForItems:(void *)arg1 :(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 42: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, int, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned long long, bycopy unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)getLocalizedErrorMessageForItems:(id)arg1 :(id)arg2;
- (id /* block */)logger;
- (id /* block */)metricsRecorder;

@end
