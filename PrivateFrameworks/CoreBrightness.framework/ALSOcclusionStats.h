
@interface ALSOcclusionStats : NSObject {
    long long  _none;
    long long  _prox;
    long long  _touch;
    long long  _touchAndProx;
}

- (id)init;
- (void)recordOcclusionByProx:(bool)arg1 andByTouch:(bool)arg2;
- (void)reset;
- (void)submit;

@end
