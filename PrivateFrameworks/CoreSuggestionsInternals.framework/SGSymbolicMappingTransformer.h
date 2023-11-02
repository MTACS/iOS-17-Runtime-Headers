
@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _characterMapping;
    NSCharacterSet * _characterSet;
    NSString * _numericMapping;
}

@property (retain) NSString *characterMapping;
@property (retain) NSCharacterSet *characterSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *numericMapping;
@property (readonly) Class superclass;

+ (id)withNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;

- (void).cxx_destruct;
- (id)characterMapping;
- (id)characterSet;
- (unsigned long long)hash;
- (id)initWithNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSymbolicMappingTransformer:(id)arg1;
- (id)numericMapping;
- (void)setCharacterMapping:(id)arg1;
- (void)setCharacterSet:(id)arg1;
- (void)setNumericMapping:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
