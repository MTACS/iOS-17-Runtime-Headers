
@interface FieldSpecTuple : NSObject {
    TIAnalyticsFieldSpec * _fieldSpec;
    NSString * _key;
}

@property (nonatomic, readonly) TIAnalyticsFieldSpec *fieldSpec;
@property (nonatomic, readonly) NSString *key;

+ (id)tupleWithKey:(id)arg1 eventSpec:(id)arg2;

- (void).cxx_destruct;
- (id)fieldSpec;
- (id)key;

@end
