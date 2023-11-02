
@interface ASDPromiseResult : NSObject {
    NSError * _error;
    id  _value;
}

@property (readonly) NSError *error;
@property (readonly) id value;

+ (id)resultWithError:(id)arg1;
+ (id)resultWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)value;

@end
