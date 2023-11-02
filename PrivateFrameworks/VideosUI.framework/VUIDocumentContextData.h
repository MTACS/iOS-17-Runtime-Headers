
@interface VUIDocumentContextData : NSObject {
    NSDictionary * _contextDataDict;
}

@property (nonatomic, copy) NSDictionary *contextDataDict;

- (void).cxx_destruct;
- (id)contextDataDict;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setContextDataDict:(id)arg1;

@end
