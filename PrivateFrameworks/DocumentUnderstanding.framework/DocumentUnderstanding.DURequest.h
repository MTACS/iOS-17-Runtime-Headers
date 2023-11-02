
@interface DocumentUnderstanding.DURequest : NSObject {
    void client;
    void contentType;
    void strategies;
}

@property (nonatomic, readonly) _TtC21DocumentUnderstanding8DUClient *client;
@property (nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *contentType;
@property (nonatomic, readonly) NSArray *strategies;

- (void).cxx_destruct;
- (id)client;
- (id)contentType;
- (void)executeWithDocument:(id)arg1 completion:(id /* block */)arg2;
- (void)executeWithResultWithDocument:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 70: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, long double, out BOOL, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, in double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in double, int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, long double, out BOOL, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, long double, out BOOL, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, in double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, in double, int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out in short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithClient:(id)arg1 contentType:(id)arg2 strategies:(id)arg3;
- (id)strategies;

@end
