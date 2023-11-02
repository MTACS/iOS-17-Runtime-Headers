
@interface SGStringLabelingTransformer : NSObject <PMLTransformerProtocol> {
    NSDictionary * _labelMapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)convertLabelsToMapping:(id)arg1;
+ (id)withLabelStrings:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLabelMapping:(id)arg1;
- (id)initWithLabelStrings:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStringLabelingTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
