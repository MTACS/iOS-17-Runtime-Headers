
@interface ActivityAwardsServices.XPCEndpointProvider : NSObject <AACXPCListenerEndpointInterface, NSXPCListenerDelegate> {
    void endpointsByEndpointName;
    void listener;
    void lock;
    void requiredEntitlements;
}

- (void).cxx_destruct;
- (void)createEndpointNamed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 36: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, unsigned char, unsigned long, int, short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, in double, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out int, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
