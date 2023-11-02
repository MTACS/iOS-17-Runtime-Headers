
@interface TPCachedViableBottles : NSObject {
    NSArray * _partialBottles;
    NSArray * _viableBottles;
}

@property (readonly, retain) NSArray *partialBottles;
@property (readonly, retain) NSArray *viableBottles;

- (void).cxx_destruct;
- (id)initWithViableBottles:(id)arg1 partialBottles:(id)arg2;
- (id)partialBottles;
- (id)viableBottles;

@end
