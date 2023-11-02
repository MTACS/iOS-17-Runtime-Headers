
@interface DECatParamsResult : NSObject {
    NSString * _catId;
    NSDictionary * _params;
}

@property (nonatomic, retain) NSString *catId;
@property (nonatomic, retain) NSDictionary *params;

- (void).cxx_destruct;
- (id)catId;
- (id)params;
- (void)setCatId:(id)arg1;
- (void)setParams:(id)arg1;

@end
