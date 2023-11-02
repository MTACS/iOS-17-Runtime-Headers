
@interface IAMValueEvent : IAMEvent {
    <NSCopying> * value;
}

@property (nonatomic, copy) <NSCopying> *value;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (void)setValue:(id)arg1;
- (id)value;

@end
