
@interface SCUIMoreHelpContextMenuContainer : NSObject <SCUIMoreHelpMenuController> {
    long long  _interventionType;
    long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interventionType;
@property (nonatomic, readonly) long long options;
@property (readonly) Class superclass;

- (id)initWithOptions:(long long)arg1 interventionType:(long long)arg2;
- (long long)interventionType;
- (long long)options;

@end
