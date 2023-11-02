
@interface PPRecordLoadingDelegate : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)arg1;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)arg1;
- (unsigned char)recordLoadingSetup;
- (void)resetRecordData;

@end
