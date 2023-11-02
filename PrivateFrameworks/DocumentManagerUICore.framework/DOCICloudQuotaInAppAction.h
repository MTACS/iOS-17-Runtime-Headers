
@interface DOCICloudQuotaInAppAction : NSObject {
    ICQInAppAction * _action;
    NSString * _title;
    NSString * _type;
}

@property (nonatomic, readonly) ICQInAppAction *action;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)action;
- (id)initWithICQInAppAction:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(id)arg2;
- (void)performAction;
- (id)title;
- (id)type;

@end
