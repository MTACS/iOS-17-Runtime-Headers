
@interface APPCContextBuilder : NSObject <APPCPromotableBaseContext> {
    void adjacentInternal;
    void current;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void maxSize;
    void newsContext;
    void next;
    void requestedAd;
    void resourceLock;
}

@property (nonatomic, readonly) NSArray *adjacent;
@property (nonatomic, readonly) APPCContext *context;
@property (nonatomic, retain) <APPCPromotableContentDepiction> *current;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, retain) APPCNewsSupplementalContext *newsContext;
@property (nonatomic, copy) NSArray *next;
@property (nonatomic, copy) NSString *requestedAd;

- (void).cxx_destruct;
- (bool)addAdjacentWithAdjacent:(id)arg1 error:(id*)arg2;
- (id)adjacent;
- (id)context;
- (id)current;
- (id)identifier;
- (id)init;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 current:(id)arg2 newsContext:(id)arg3 requestedAd:(id)arg4;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 current:(id)arg2 next:(id)arg3 newsContext:(id)arg4 requestedAd:(id)arg5;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)newsContext;
- (id)next;
- (void)removeAdjacentWithAdjacent:(id)arg1;
- (id)requestedAd;
- (void)setCurrent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNewsContext:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setRequestedAd:(id)arg1;

@end
