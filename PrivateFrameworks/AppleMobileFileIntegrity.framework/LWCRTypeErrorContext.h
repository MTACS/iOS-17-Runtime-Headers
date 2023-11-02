
@interface LWCRTypeErrorContext : NSObject {
    unsigned int  code;
    NSMutableArray * keyContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)popKey;
- (void)pushKey:(id)arg1;
- (void)setError:(unsigned int)arg1;
- (id)synthesizeError;

@end
