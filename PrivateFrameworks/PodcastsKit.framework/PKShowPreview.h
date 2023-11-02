
@interface PKShowPreview : NSObject {
    NSString * _feedUrl;
    NSString * _storeId;
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic, copy) NSString *feedUrl;
@property (nonatomic, copy) NSString *storeId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)feedUrl;
- (id)initWithTitle:(id)arg1 storeId:(id)arg2 feedUrl:(id)arg3 uuid:(id)arg4;
- (void)setFeedUrl:(id)arg1;
- (void)setStoreId:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)storeId;
- (id)title;
- (id)uuid;

@end
