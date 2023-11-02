
@interface TTKTestCase : NSObject {
    NSMutableDictionary * _annotations;
    NSString * _intendedText;
    NSDictionary * _metadata;
    NSArray * _records;
}

@property (nonatomic, readonly, copy) NSMutableDictionary *annotations;
@property (nonatomic, readonly, copy) NSString *intendedText;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSArray *records;

+ (id)convertToIsolatedWordMode:(id)arg1;

- (void).cxx_destruct;
- (id)annotations;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadata:(id)arg1 records:(id)arg2;
- (id)initWithMetadata:(id)arg1 records:(id)arg2 intendedText:(id)arg3;
- (id)intendedText;
- (id)metadata;
- (id)records;
- (id)toJsonDictionary;

@end
