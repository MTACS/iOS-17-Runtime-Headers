
@interface APPCBaseContext : NSObject <APPCPromotableBaseContext> {
    void adjacent;
    void adjacentInternal;
    void current;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void maxSize;
    void next;
    void requestedAd;
}

@property (nonatomic, readonly) NSArray *adjacent;
@property (nonatomic, readonly) <APPCPromotableContentDepiction> *current;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) NSArray *next;
@property (nonatomic, copy) NSString *requestedAd;

- (void).cxx_destruct;
- (id)adjacent;
- (id)current;
- (id)identifier;
- (id)init;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)next;
- (id)requestedAd;
- (void)setRequestedAd:(id)arg1;

@end
