
@interface VCSPropertyValue : NSObject <VCSDictifiable> {
    NSMutableDictionary * _parameters;
    id  _value;
    unsigned long long  _valueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) unsigned long long valueType;

- (void).cxx_destruct;
- (void)addParameter:(id)arg1 withValue:(id)arg2;
- (id)description;
- (id)dictify;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (id)value;
- (id)valueDescription;
- (unsigned long long)valueType;

@end
