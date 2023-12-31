
@interface TPSTuple : NSObject {
    id  _first;
    id  _second;
}

@property (nonatomic, readonly) id first;
@property (nonatomic, readonly) id second;

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)second;

@end
