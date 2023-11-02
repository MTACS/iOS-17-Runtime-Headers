
@interface NAPair : NSObject {
    id  _first;
    id  _second;
}

@property (readonly) id first;
@property (readonly) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (id)second;

@end
