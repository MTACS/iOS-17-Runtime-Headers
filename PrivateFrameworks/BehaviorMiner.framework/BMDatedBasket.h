
@interface BMDatedBasket : NSObject {
    NSSet * _basket;
    NSDate * _date;
}

@property (nonatomic, readonly, copy) NSSet *basket;
@property (nonatomic, readonly, copy) NSDate *date;

+ (id)undated:(id)arg1;

- (void).cxx_destruct;
- (id)basket;
- (id)date;
- (id)initWithBasket:(id)arg1 Date:(id)arg2;

@end
