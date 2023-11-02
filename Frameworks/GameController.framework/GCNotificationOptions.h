
@interface GCNotificationOptions : NSObject {
    NSString * _body;
    NSString * _categoryID;
    NSURL * _defaultActionURL;
    NSString * _threadID;
    NSString * _title;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSString *categoryID;
@property (nonatomic, retain) NSURL *defaultActionURL;
@property (nonatomic, retain) NSString *threadID;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (id)categoryID;
- (id)defaultActionURL;
- (void)setBody:(id)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setDefaultActionURL:(id)arg1;
- (void)setThreadID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)threadID;
- (id)title;

@end
