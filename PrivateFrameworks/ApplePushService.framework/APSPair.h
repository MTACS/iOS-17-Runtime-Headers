
@interface APSPair : NSObject {
    id  _first;
    id  _second;
}

@property (nonatomic, retain) id first;
@property (nonatomic, retain) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)second;
- (void)setFirst:(id)arg1;
- (void)setSecond:(id)arg1;

@end
