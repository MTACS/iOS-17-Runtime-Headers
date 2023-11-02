
@interface TPSContextualDuetEvent : TPSContextualEvent {
    NSArray * _groupByKeyPaths;
    TPSContextualDuetEventMeta * _meta;
    TPSContextualDuetEventSource * _source;
    long long  _storeType;
    NSString * _stream;
    TPSContextualDuetEventValue * _value;
}

@property (nonatomic, copy) NSArray *groupByKeyPaths;
@property (nonatomic, copy) TPSContextualDuetEventMeta *meta;
@property (nonatomic, copy) TPSContextualDuetEventSource *source;
@property (nonatomic) long long storeType;
@property (nonatomic, copy) NSString *stream;
@property (nonatomic, copy) TPSContextualDuetEventValue *value;

+ (long long)_defaultStoreTypeForStream:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)groupByKeyPaths;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)meta;
- (id)newStateFromStateDictionary:(id)arg1;
- (void)setGroupByKeyPaths:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setStoreType:(long long)arg1;
- (void)setStream:(id)arg1;
- (void)setValue:(id)arg1;
- (id)source;
- (long long)storeType;
- (id)stream;
- (id)value;

@end
