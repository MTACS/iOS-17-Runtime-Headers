
@interface _MXVersion : NSObject {
    NSArray * _components;
}

@property (nonatomic, readonly) NSArray *components;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)components;
- (id)init;
- (id)initWithComponents:(id)arg1;
- (id)initWithVersionString:(id)arg1;

@end
