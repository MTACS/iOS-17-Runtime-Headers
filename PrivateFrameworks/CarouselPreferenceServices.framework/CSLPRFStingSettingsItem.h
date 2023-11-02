
@interface CSLPRFStingSettingsItem : NSObject {
    NSNumber * _actionType;
    NSString * _assetName;
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic, copy) NSNumber *actionType;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)actionType;
- (id)assetName;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 actionType:(id)arg3 assetName:(id)arg4;
- (void)setActionType:(id)arg1;
- (void)setAssetName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
