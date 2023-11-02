
@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel {
    NSDate * _placeholderDate;
    id  _placeholderUUID;
}

@property (nonatomic, readonly) NSDate *placeholderDate;
@property (nonatomic, retain) id placeholderUUID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)badgeType;
- (id)description;
- (id)fileCreationDate;
- (id)fileName;
- (unsigned long long)hash;
- (id)initWithPlaceholderDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToImportPlaceholderViewModel:(id)arg1;
- (id)placeholderDate;
- (id)placeholderUUID;
- (void)setPlaceholderUUID:(id)arg1;
- (id)uuid;

@end
