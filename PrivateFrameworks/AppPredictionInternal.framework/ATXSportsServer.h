
@interface ATXSportsServer : NSObject <ATXSportsInterface, NSXPCListenerDelegate> {
    void $__lazy_storage_$_listener;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)requestedSchedulesForTeamsWithReply:(void *)arg1; // needs 1 arg types, found 26: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out const /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, short, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out in short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
