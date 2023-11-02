
@interface SKUIReportAConcernOperation : ISOperation {
    SKUIReportAConcernMetadata * _metadata;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, retain) SKUIReportAConcernMetadata *metadata;
@property (copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)_httpBody;
- (id)initWithMetadata:(id)arg1;
- (id)metadata;
- (id)responseDictionary;
- (void)run;
- (void)setMetadata:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end
