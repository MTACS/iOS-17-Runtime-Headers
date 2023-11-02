
@interface NDOACController : NSObject {
    bool  _isDefaultDevice;
    NDOSpecifierDataSource * _ndoSpecifierDataSource;
    PSListController * _parentViewController;
    NSString * _specifierIDToInsertAfter;
}

@property bool isDefaultDevice;
@property (nonatomic, retain) NDOSpecifierDataSource *ndoSpecifierDataSource;
@property (nonatomic) PSListController *parentViewController;
@property (nonatomic, retain) NSString *specifierIDToInsertAfter;
@property (readonly) NSArray *specifiers;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)forceUpdateSpecifiersAndForceUpdateFollowup:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithSerialNumber:(id)arg1;
- (bool)isDefaultDevice;
- (id)ndoSpecifierDataSource;
- (id)parentViewController;
- (void)setIsDefaultDevice:(bool)arg1;
- (void)setNdoSpecifierDataSource:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSpecifierIDToInsertAfter:(id)arg1;
- (id)specifierIDToInsertAfter;
- (id)specifiers;
- (void)updateSpecifiersWithCompletionHandler:(id /* block */)arg1;

@end
