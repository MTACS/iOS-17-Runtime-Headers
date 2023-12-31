
@interface FCObservable : NSObject {
    NSMutableArray * _observers;
    unsigned long long  _token;
    id  _value;
}

@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic) unsigned long long token;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithValue:(id)arg1;
- (void)next:(id)arg1;
- (id)observe:(id /* block */)arg1;
- (id)observers;
- (void)quietNext:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setToken:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)token;
- (id)value;

@end
