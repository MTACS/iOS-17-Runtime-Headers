
@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions {
    bool  _completeDataPromise;
    bool  _createAsMobileBackup;
    bool  _createsPlaceholders;
    NSArray * _items;
    bool  _restoreApplicationData;
    bool  _skipCoordinatorCompletion;
}

@property (nonatomic) bool completeDataPromise;
@property (nonatomic) bool createAsMobileBackup;
@property (nonatomic) bool createsPlaceholders;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) bool restoreApplicationData;
@property (nonatomic) bool skipCoordinatorCompletion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)completeDataPromise;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createAsMobileBackup;
- (bool)createsPlaceholders;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (bool)restoreApplicationData;
- (void)setCompleteDataPromise:(bool)arg1;
- (void)setCreateAsMobileBackup:(bool)arg1;
- (void)setCreatesPlaceholders:(bool)arg1;
- (void)setRestoreApplicationData:(bool)arg1;
- (void)setSkipCoordinatorCompletion:(bool)arg1;
- (bool)skipCoordinatorCompletion;

@end
