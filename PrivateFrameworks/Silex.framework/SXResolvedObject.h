
@interface SXResolvedObject : NSObject {
    NSSet * _conditionTypes;
    SXJSONObject * _object;
}

@property (nonatomic, readonly, copy) NSSet *conditionTypes;
@property (nonatomic, readonly) SXJSONObject *object;

- (void).cxx_destruct;
- (id)conditionTypes;
- (id)initWitObject:(id)arg1 conditionTypes:(id)arg2;
- (id)object;

@end
