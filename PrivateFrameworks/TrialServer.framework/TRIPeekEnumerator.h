
@interface TRIPeekEnumerator : NSObject {
    id  _peek;
    NSEnumerator * _underlyingEnum;
}

- (void).cxx_destruct;
- (id)initWithEnumerator:(id)arg1;
- (id)nextObject;
- (id)peekNextObject;

@end
