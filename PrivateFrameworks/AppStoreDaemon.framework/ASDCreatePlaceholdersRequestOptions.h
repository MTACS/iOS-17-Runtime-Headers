
@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions {
    bool  _completeDataPromise;
    bool  _createAsMobileBackup;
    NSArray * _items;
}

@property (nonatomic) bool completeDataPromise;
@property (nonatomic) bool createAsMobileBackup;
@property (nonatomic, readonly) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)completeDataPromise;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createAsMobileBackup;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (void)setCompleteDataPromise:(bool)arg1;
- (void)setCreateAsMobileBackup:(bool)arg1;

@end
