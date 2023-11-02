
@interface FPErrorRedactionHelper : NSObject {
    unsigned long long  _depth;
    NSError * _error;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithError:(id)arg1 depth:(unsigned long long)arg2;
- (id)parseErrorIntoStringRedacted:(bool)arg1;
- (id)redactedDescription;

@end
