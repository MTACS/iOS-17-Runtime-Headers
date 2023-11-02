
@interface HFActionNaturalLanguageExecutionTuple : NSObject {
    id  _first;
    id  _second;
    id  _third;
}

@property (nonatomic, retain) id first;
@property (nonatomic, retain) id second;
@property (nonatomic, retain) id third;

+ (id)tuple:(id)arg1 second:(id)arg2;
+ (id)tuple:(id)arg1 second:(id)arg2 third:(id)arg3;

- (void).cxx_destruct;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
- (id)second;
- (void)setFirst:(id)arg1;
- (void)setSecond:(id)arg1;
- (void)setThird:(id)arg1;
- (id)third;

@end
