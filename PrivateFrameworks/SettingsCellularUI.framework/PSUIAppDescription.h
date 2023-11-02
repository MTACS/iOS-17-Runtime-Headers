
@interface PSUIAppDescription : NSObject {
    NSString * _bundleID;
    UIImage * _icon;
    NSURL * _iconURL;
    NSURL * _installURL;
    NSString * _name;
    NSString * _publisher;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSURL *iconURL;
@property (nonatomic, copy) NSURL *installURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *publisher;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)icon;
- (id)iconURL;
- (id)initWithAMSMediaResponseDictionary:(id)arg1;
- (id)installURL;
- (id)name;
- (id)publisher;
- (void)setBundleID:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setInstallURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPublisher:(id)arg1;

@end
