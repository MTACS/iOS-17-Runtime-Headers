
@interface StockNewsItemCollection : NSObject {
    double  _expirationTime;
    NSArray * _newsItems;
}

@property (nonatomic) double expirationTime;
@property (nonatomic, retain) NSArray *newsItems;

- (void).cxx_destruct;
- (id)archiveArray;
- (double)expirationTime;
- (id)initWithArchiveArray:(id)arg1;
- (id)newsItems;
- (void)setExpirationTime:(double)arg1;
- (void)setNewsItems:(id)arg1;

@end
