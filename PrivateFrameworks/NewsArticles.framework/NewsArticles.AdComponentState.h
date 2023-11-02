
@interface NewsArticles.AdComponentState : NSObject <SXComponentState> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bannerState;
    void identifier;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;

@end
