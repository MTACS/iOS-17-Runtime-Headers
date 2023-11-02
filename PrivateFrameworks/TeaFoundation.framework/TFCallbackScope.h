
@interface TFCallbackScope : NSObject {
    NSArray * _names;
    unsigned long long  _scope;
}

@property (nonatomic, readonly) NSArray *names;
@property (nonatomic, readonly) unsigned long long scope;

- (void).cxx_destruct;
- (id)initWithScope:(unsigned long long)arg1 names:(id)arg2;
- (id)names;
- (unsigned long long)scope;

@end
