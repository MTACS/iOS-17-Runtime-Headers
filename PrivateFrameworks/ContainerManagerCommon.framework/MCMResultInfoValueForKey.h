
@interface MCMResultInfoValueForKey : MCMResultBase {
    id  _value;
}

@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
