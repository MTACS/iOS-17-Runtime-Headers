
@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSDataDetector * _dataDetector;
    NSString * _emailMapping;
    NSString * _linkMapping;
}

@property (retain) NSDataDetector *dataDetector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *emailMapping;
@property (readonly) unsigned long long hash;
@property (retain) NSString *linkMapping;
@property (readonly) Class superclass;

+ (id)withEmailMapping:(id)arg1 linkMapping:(id)arg2;

- (void).cxx_destruct;
- (id)dataDetector;
- (id)emailMapping;
- (unsigned long long)hash;
- (id)initWithEmailMapping:(id)arg1 linkMapping:(id)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntityMappingTransformer:(id)arg1;
- (id)linkMapping;
- (void)setDataDetector:(id)arg1;
- (void)setEmailMapping:(id)arg1;
- (void)setLinkMapping:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
