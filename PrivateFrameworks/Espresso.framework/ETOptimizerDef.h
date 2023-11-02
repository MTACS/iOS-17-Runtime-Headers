
@interface ETOptimizerDef : NSObject {
    unsigned int  _batch_size;
}

@property unsigned int batch_size;

- (unsigned int)batch_size;
- (id)init;
- (void)setBatch_size:(unsigned int)arg1;

@end
