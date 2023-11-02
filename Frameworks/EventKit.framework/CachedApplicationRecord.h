
@interface CachedApplicationRecord : NSObject {
    LSApplicationRecord * _record;
}

@property (retain) LSApplicationRecord *record;

- (void).cxx_destruct;
- (id)record;
- (void)setRecord:(id)arg1;

@end
