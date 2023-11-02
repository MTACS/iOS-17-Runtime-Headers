
@interface DialogExecutionResult : NSObject {
    NSString * _catId;
    NSArray * _dialog;
    NSDictionary * _meta;
}

@property (nonatomic, retain) NSString *catId;
@property (nonatomic, retain) NSArray *dialog;
@property (nonatomic, retain) NSDictionary *meta;

- (void).cxx_destruct;
- (id)catId;
- (id)dialog;
- (id)meta;
- (void)setCatId:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setMeta:(id)arg1;

@end
