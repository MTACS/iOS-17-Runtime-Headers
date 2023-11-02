
@interface WDCitationAuthor : NSObject {
    NSString * mFirst;
    NSString * mLast;
}

@property (nonatomic, retain) NSString *first;
@property (nonatomic, retain) NSString *last;

- (void).cxx_destruct;
- (id)first;
- (id)initWithFirst:(id)arg1 last:(id)arg2;
- (id)last;
- (void)setFirst:(id)arg1;
- (void)setLast:(id)arg1;

@end
