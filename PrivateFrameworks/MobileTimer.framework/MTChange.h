
@interface MTChange : NSObject {
    id  _changedValue;
    id  _originalValue;
    NSString * _property;
}

@property (nonatomic, retain) id changedValue;
@property (nonatomic, retain) id originalValue;
@property (nonatomic, copy) NSString *property;

- (void).cxx_destruct;
- (id)changedValue;
- (id)description;
- (id)initWithProperty:(id)arg1 changedValue:(id)arg2 originalValue:(id)arg3;
- (id)originalValue;
- (id)property;
- (void)setChangedValue:(id)arg1;
- (void)setOriginalValue:(id)arg1;
- (void)setProperty:(id)arg1;

@end
