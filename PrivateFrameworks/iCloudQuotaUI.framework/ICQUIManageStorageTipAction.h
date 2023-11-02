
@interface ICQUIManageStorageTipAction : NSObject {
    NSString * _actionButtonText;
    NSString * _actionName;
    NSURL * _actionURL;
}

@property (nonatomic, readonly, copy) NSString *actionButtonText;
@property (nonatomic, readonly, copy) NSString *actionName;
@property (nonatomic, readonly) NSURL *actionURL;

+ (id)actionsFromActionInfos:(id)arg1;

- (void).cxx_destruct;
- (id)actionButtonText;
- (id)actionName;
- (id)actionURL;
- (id)description;
- (id)initFromActionInfo:(id)arg1;
- (id)initFromRUITableViewRow:(id)arg1;

@end
