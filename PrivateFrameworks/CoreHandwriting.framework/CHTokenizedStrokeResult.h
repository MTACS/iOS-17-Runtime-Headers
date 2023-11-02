
@interface CHTokenizedStrokeResult : NSObject {
    long long  _resultLevel;
    NSSet * _strokeIdentifiers;
}

@property (nonatomic, readonly) long long resultLevel;
@property (nonatomic, readonly, copy) NSSet *strokeIdentifiers;

- (void).cxx_destruct;
- (id)initWithStrokeIdentifiers:(id)arg1 resultLevel:(long long)arg2;
- (long long)resultLevel;
- (id)strokeIdentifiers;

@end
