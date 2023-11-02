
@interface CalGeocoder : NSObject {
    id /* block */  _completionBlock;
    NSString * _locationString;
    MKLocalSearch * _search;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSString *locationString;
@property (nonatomic, retain) MKLocalSearch *search;

+ (void)geocodeLocationString:(id)arg1 withCompletionBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)initWithLocationString:(id)arg1 andCompletionBlock:(id /* block */)arg2;
- (id)locationString;
- (id)search;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setLocationString:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)startGeocoding;

@end
