
@interface AMSPair : NSObject {
    id  _first;
    id  _second;
}

@property (nonatomic, readonly) id first;
@property (nonatomic, readonly) id second;

- (void).cxx_destruct;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)second;

@end
