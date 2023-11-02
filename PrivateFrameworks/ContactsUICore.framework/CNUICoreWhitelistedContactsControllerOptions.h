
@interface CNUICoreWhitelistedContactsControllerOptions : NSObject {
    bool  _shouldPrepopulateEmptyWhitelist;
    bool  _shouldRequireConfirmationOfChanges;
}

@property (nonatomic, readonly) bool shouldPrepopulateEmptyWhitelist;
@property (nonatomic, readonly) bool shouldRequireConfirmationOfChanges;

+ (id)iosOptions;
+ (id)macOptions;
+ (id)macOptionsLocal;

- (id)init;
- (id)initWithShouldPrepopulateEmptyWhitelist:(bool)arg1 shouldRequireConfirmationOfChanges:(bool)arg2;
- (bool)shouldPrepopulateEmptyWhitelist;
- (bool)shouldRequireConfirmationOfChanges;

@end
