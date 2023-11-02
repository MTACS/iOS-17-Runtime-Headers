
@interface CALNNotificationAction : NSObject {
    NSString * _identifier;
    NSString * _systemImageName;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 systemImageName:(id)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 systemImageName:(id)arg3 url:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 systemImageName:(id)arg3 url:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAction:(id)arg1;
- (id)systemImageName;
- (id)title;
- (id)url;

@end
