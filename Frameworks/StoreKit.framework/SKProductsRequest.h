
@interface SKProductsRequest : SKRequest {
    id  _productsRequestInternal;
}

@property (nonatomic, readonly) NSSet *_productIdentifiers;
@property (nonatomic) <SKProductsRequestDelegate> *delegate;

- (void).cxx_destruct;
- (void)_logEventWithPrimaryError:(id)arg1 mappedError:(id)arg2;
- (id)_productIdentifiers;
- (void)_start;
- (void)_startWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 27: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const out double, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, short, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, out in short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithProductIdentifiers:(id)arg1;

@end
